#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int a[1000009];
bool vis[1000009];
int dis[1000009];
bool check(int x)
{
    for(int i=1;i<=n-x+1;++i)
    {
        if(dis[i+x-1]-dis[i]==x-1)
        {
            return 1;
        }
    }
    return 0;
}
signed main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        if(i>1)
        {
            if(a[i]<a[i-1]*2)
            {
                vis[i]=1;
            }
            dis[i]=dis[i-1]+vis[i];
        }
    }
    int l=0,r=n+1;
    while(l+1<r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}