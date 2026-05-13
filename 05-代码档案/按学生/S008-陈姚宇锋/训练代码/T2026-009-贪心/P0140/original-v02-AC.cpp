#include <bits/stdc++.h>
using namespace std;
#define int long long
struct stu
{
	int w,s;
}a[100009];
bool cmp(stu a,stu b)
{
	return a.w+a.s<b.w+b.s;
} 
signed main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i].w>>a[i].s;
	}
	sort(a+1,a+1+n,cmp);
	int sum=0;
	int maxx=-1e9;
	for(int i=1;i<=n;++i)
	{
		maxx=max(maxx,sum-a[i].s);
		sum+=a[i].w;
	}
	cout<<maxx;
	return 0;
}	