#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,x,y,ans ,vis[1000005];
signed main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        for(int j=x;j<=y;j++){
            vis[j]++;
            if(vis[j]==1) ans++;
        }
    }
    cout<<n-ans+1;
    return 0;
}