#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int vis[100009];
signed main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int x;
        cin>>x;
        vis[i]=vis[i-1]+x;
    }
    int maxx=0;
    for(int i=1;i<=n;++i)
    {
        for(int j=i;j<=n;++j)
        {
            maxx=max(vis[j]-vis[i-1],maxx);
        }
    }
    maxx=max(maxx,1ll*0);
    cout<<maxx;
    return 0;
}