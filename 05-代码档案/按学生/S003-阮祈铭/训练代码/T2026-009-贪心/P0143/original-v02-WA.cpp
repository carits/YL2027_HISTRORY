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
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].lnth>>a[i].plsr;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=k;i++)
	{
		s=min(s,a[i].plsr);
		sum+=a[i].lnth;
		ans=max(ans,s*sum);
	}
	cout<<ans<<endl;
	return 0;
}