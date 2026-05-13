#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int> > que;
const int kMaxN=2e5+10;
int n,a[kMaxN],cnt;
long long sum=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cnt++;
		que.push(a[i]);
		sum+=a[i];
		if(sum<0)
		{
			sum-=que.top();
			que.pop();
			cnt--;
		}
	}
	cout<<cnt;
	return 0;
}