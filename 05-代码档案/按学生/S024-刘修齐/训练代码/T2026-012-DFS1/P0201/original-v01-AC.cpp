#include<bits/stdc++.h>
using namespace std;
int n,ans;
int a[25][2];
int vis[25];
void dfs(int z){
    if(z>n){
        ans++;
        return ;
    }
    if(vis[a[z][0]]==0){
        vis[a[z][0]]=1;
        dfs(z+1);
        vis[a[z][0]]=0;
    }
    if(vis[a[z][1]]==0){
        vis[a[z][1]]=1;
        dfs(z+1);
        vis[a[z][1]]=0;
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    dfs(1);
    cout<<ans;
    return 0;
}