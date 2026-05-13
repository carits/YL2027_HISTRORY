#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
int b[1000009];
int x[1000009];
int y[1000009]; 
signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i]>>b[i]>>x[i]>>y[i];
    } 
    int xn,yn;
    cin>>xn>>yn;
    int ans=-1;
    for(int i=1;i<=n;++i)
    {
        if(min(a[i],x[i])<=xn  && max(a[i],x[i])>=xn && min(b[i],y[i])<=yn && max(b[i],y[i])>=yn)
        {
            ans=i;
        }
    } 
    cout<<ans;
	return 0;
}	