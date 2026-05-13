#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
struct stu
{
    int x[19];
}a2[1000009];
bool cmp(const stu &a,const stu &b)
{
    for(int j=1;j<=m;++j)
    {
        if(a.x[j]!=b.x[j])
        {
            return a.x[j]>b.x[j];
        }
    }
    return 0;
}
signed main()
{
    int ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
	   for(int j=1;j<=m;++j)
	   {
	       int a;
	       cin>>a;
	       a2[i].x[j]=a;
	   }
	} 
	sort(a2+1,a2+1+n,cmp);
	for(int i=1;i<=n;++i)
	{
	    for(int j=1;j<=m;++j)
	    {
	       cout<<a2[i].x[j]<<' ';
	    }
	    cout<<endl;
	}
	return 0;
}