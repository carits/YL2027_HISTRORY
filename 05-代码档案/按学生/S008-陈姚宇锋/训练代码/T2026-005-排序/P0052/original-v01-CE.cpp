#include <bits/stdc++.h>
using namespace std;
#define int long long
struct stu
{
    int x,id;
}a2[10000009];
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
	} 
	sort(a2+1,a2+1+n\,cmp);
	for(int i=1;i<=n;++i)
	{
	    cout<<a2[i].id<<' ';
	}
	return 0;
}