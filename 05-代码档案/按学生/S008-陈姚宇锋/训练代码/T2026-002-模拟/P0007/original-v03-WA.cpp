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
        for(int i1=a[i];i1<=x[i];++i1)
        {
            for(int j1=b[i];j1<=y[i];++j1)
            {
                if(i1==xn && j1==yn)
                {
                    ans=i;
                }
            }
        }
    } 
    cout<<ans;
	return 0;
}	