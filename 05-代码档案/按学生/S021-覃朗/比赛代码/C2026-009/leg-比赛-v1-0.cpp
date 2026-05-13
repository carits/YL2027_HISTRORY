#include <bits/stdc++.h>
#define int long long
using namespace std;
long long n,m,a,b,c,d,mi=1e18;
void dfs(int x,int y,int s){
    if(x==n&&y==m){
        mi=min(mi,s);
        return;
    }
    if(x+1<=n&&(x+y)%2==0)dfs(x+1,y,s+a);
    if(x+1<=n&&(x+y)%2!=0)dfs(x+1,y,s+c);
    if(y+1<=m&&(x+y)%2==0)dfs(x,y+1,s+b);
    if(y+1<=m&&(x+y)%2!=0)dfs(x,y+1,s+d);
}
signed main(){
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    cin>>n>>m>>a>>b>>c>>d;
    dfs(0,0,0);
    cout<<mi;
    return 0;
}
