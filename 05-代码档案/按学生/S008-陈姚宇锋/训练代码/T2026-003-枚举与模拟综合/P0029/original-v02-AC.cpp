#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 1e5+3;
int a[N];
map<int,int>vis;
int maxx;
signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            vis[a[i]+a[j]]++;
            maxx=max(maxx,vis[a[i]+a[j]]);
        }
    }
    cout<<maxx<<endl;
    return 0;
}