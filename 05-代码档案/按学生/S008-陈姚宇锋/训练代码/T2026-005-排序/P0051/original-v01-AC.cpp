#include <bits/stdc++.h>
using namespace std;
#define int long long
struct stu
{
    int x,y;
}a2[10000009];
bool cmp(const stu a,const stu b)
{
    return a.y<b.y;
}
signed main()
{
    int ans=0;
	int n,s;
	cin>>n>>s;
	int a,b;
	cin>>a>>b;
	int sum=0;
	for(int i=1;i<=n;++i)
	{
	    int xi,yj;
	    cin>>xi>>yj;
	    if(a+b>=xi)
	    {
	        sum++;
	        a2[sum].x=xi;
	        a2[sum].y=yj;
	    }
	} 
	sort(a2+1,a2+1+sum,cmp);
	for(int i=1;i<=sum;++i)
	{
	    if(a2[i].y<=s)
	    {
	        ans++;
	        s-=a2[i].y;
	    }
	}
	cout<<ans;
	return 0;
}