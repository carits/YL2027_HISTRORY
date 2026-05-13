#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
struct stu
{
    int x[190],id;
}a2[1000009];
bool cmp(const stu &a,const stu &b)
{
    return a.x[1]>b.x[1];
}
signed main()
{
    int ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
	   for(int j=1;j<=m;++j)
	   {
	       cin>>a2[i].x[j];
	       a2[i].id=i;  
                                                                                                                                                                                                                                                                                                                                                                          
	   }
	} 
	for(int i=1;i<=m;++i)
	{
	    sort(a2+1,a2+1+n,cmp);
	    for(int j=1;j<=n;++j)
	    {
	       cout<<a2[j].id<<' ';
	    }
	    cout<<endl;
	    if(i==m)
	    {
	        break;
	    }
	    for(int j=1;j<=n;++j)
	    {
	        a2[j].x[1]=a2[j].x[i+1];
	    }
    }   
	return 0;
}