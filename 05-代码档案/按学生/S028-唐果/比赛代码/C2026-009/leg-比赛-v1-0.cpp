#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,y,s,yy,ss,minn=1e18;//c,d,a,b
void dfs(int i,int j,int t)
{
    if(i==n&&j==m)
    {
        minn=min(minn,t);
        return;
    }
    if(i>n||j>m)
    {
        return;
    } 
 //   cout << i << " " << j << " " << t << endl;
    if((i+j)%2==0)
    {
        dfs(i,j+1,t+ss);
        dfs(i+1,j,t+yy);
    }
    else
    {
        dfs(i,j+1,t+s);
        dfs(i+1,j,t+y);
    }
}
signed main()
{
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    cin >> n >> m >> yy >> ss >> y >> s;
    dfs(0,0,0);
    cout << minn;
    return 0;
}
