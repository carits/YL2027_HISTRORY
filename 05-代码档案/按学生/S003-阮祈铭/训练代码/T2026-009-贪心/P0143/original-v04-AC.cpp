#include<bits/stdc++.h>
using namespace std;
struct msc
{
	long long lnth,plsr;
}a[300010];
bool cmp(msc a,msc b)
{
	return a.plsr>b.plsr;
}
long long k,n,sum=0,s=INT_MAX,ans;
priority_queue<int,vector<int>,greater<int> > que;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].lnth>>a[i].plsr;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		que.push(a[i].lnth);
		sum+=a[i].lnth;
		if(que.size()>k)
		{
			sum-=que.top();
			que.pop();
		}
		ans=max(ans,a[i].plsr*sum);
	}
	cout<<ans<<endl;
	return 0;
}