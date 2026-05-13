#include<bits/stdc++.h>
using namespace std;
int n,a[100010];
int main()
{
	freopen("friends.in","r",stdin);
	freopen("friends.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n<=20)
	{
		
	}
	else if(n<=5000)
	{
		stack<int> stk;
		for(int i=n;i>=1;i--)
		{
			if(n%i==0)
			{
				stk.push(n/i);
			}
			else
			{
				stk.push(stk.top());
			}
		}
		while(!stk.empty())
		{
			cout<<stk.top()<<' ';
			stk.pop();
		}
	}
	return 0;
}
