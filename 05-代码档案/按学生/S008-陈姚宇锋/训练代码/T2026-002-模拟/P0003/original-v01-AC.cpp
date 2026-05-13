#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
int vis[1000009];
signed main()
{
    int l,m;
    cin>>l>>m;
    for(int i=1;i<=m;++i)
    {
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;++j)
        {
            vis[j]++;
        }
    }
    int cnt=0;
    for(int i=0;i<=l;++i)
    {
        if(vis[i]==0)
        {
            cnt++;
        }
    }
    cout<<cnt;
	return 0;
}	