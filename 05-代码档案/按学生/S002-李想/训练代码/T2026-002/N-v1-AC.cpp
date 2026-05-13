#include<bits/stdc++.h>
using namespace std;

int n,k;
int const N=1e5+5;
bool vis[N];
int main(){
    cin>> n >> k;
    for(int i=1;i<=k;i++){
        for(int j=i;j<=n;j+=i){
            vis[j]=!vis[j];
        }
    }
    bool p=1;
    for(int i=1;i<=n;i++){
        if(vis[i]){
            if(!p)cout<< " ";
            cout<< i;
            p=0;
        }
    }
    return 0;
}