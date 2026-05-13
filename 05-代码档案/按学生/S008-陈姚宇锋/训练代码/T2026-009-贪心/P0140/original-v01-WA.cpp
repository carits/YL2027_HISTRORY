#include <bits/stdc++.h>
using namespace std;
#define int long long
struct stu
{
	int w,s;
}a[100009];
bool cmp(stu a,stu b)
{
	return a.w<b.w; 
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
	int maxx=0;
	int sum=0;
	for(int i=2;i<=n;++i)
	{
		sum+=a[i-1].w;
		maxx=max(maxx,sum-a[i].s);
	}
	cout<<maxx;
	return 0;
}