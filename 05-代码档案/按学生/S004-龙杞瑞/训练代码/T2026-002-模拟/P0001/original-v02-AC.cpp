#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,maxn,t[10005];
signed main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int w;
        cin>>w;
        int k=1,sum=1e9;
        for(int j=1;j<=m;j++){
            if(t[j]<sum){
                k=j;
                sum=t[j];
            }
        }
        t[k]+=w;
    } 
    for(int i=1;i<=n;i++) maxn=max(maxn,t[i]);
    cout<<maxn;
    return 0;
}