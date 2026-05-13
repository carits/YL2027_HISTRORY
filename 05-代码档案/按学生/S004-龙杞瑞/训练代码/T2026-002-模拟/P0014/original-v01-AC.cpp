#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,vis[100005]={0};
signed main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i%j==0){
                if(vis[i]==1) vis[i]=0;
                else vis[i]=1;
            } 
        }
    }
    for(int i=1;i<=n;i++) if(vis[i]==1) cout<<i<<" ";
   return 0;
}