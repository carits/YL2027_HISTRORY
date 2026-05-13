#include <bits/stdc++.h>
using namespace std;
#define int long long
int vis[1009][1009];
signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int a,b,x,y ;
        cin>>a>>b>>x>>y;
        for(int i1=a;i1<=x;++i1)
        {
            for(int j1=b;j1<=y;++j1)
            {
                vis[i1][j1]=i;
            }
        }
    } 
    int x,y;
    cin>>x>>y;
    if(vis[x][y]==0)
    {
        vis[x][y]=-1;
    }
    cout<<vis[x][y];

	return 0;
}	