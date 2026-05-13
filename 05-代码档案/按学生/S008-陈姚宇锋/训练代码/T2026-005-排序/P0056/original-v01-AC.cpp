#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
struct stu
{
    int x,y;
}a2[1000009];
bool cmp(const stu &a,const stu &b)
{
    if(a.x!=b.x)
    {
        return a.x<b.x;
    }
    return a.y<b.y;
}
signed main()
{
    int ans=0;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
	   cin>>a2[i].x>>a2[i].y;
	} 
	sort(a2+1,a2+1+n,cmp);
	for(int i=1;i<=n;++i)
	{
	    cout<<a2[i].x<<' '<<a2[i].y<<endl;
	}
	return 0;
}