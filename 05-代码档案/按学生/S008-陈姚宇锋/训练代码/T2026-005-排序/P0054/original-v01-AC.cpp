#include <bits/stdc++.h>
using namespace std;
#define int long long
struct stu
{
    int x,id;
}a2[10000009],a3[10000009];
map<int,int>vis;
bool cmp(const stu a,const stu b)
{
    return a.x<b.x;
}
signed main()
{
    int ans=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
	   cin>>a2[i].x;
	   a2[i].id=i;
	   a3[i].x=a2[i].x;
	   a3[i].id=i;
	} 
	sort(a2+1,a2+1+n,cmp);
	for(int i=1;i<=n;++i)
	{
	   vis[a2[i].x]=i;
	}
	for(int i=1;i<=n;++i)
	{
	    cout<<vis[a3[i].x]<<' ';
	}
	return 0;
}