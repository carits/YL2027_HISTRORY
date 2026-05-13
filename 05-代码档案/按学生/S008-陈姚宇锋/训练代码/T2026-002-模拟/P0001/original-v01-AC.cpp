#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
priority_queue<int,vector<int>,greater<int>>op;
signed main()
{
	int n,m,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(i==1)
		{
			op.push(a[i]);
			sum=max(sum,a[i]);
		}
		else
		{
			int x=a[i]+op.top();
			if(op.size()==m)
			{
				op.pop();
				op.push(x);
				sum=max(sum,x);
			}
			else
			{
				sum=max(sum,a[i]);
				op.push(a[i]);
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}	