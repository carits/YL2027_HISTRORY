#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m; 
signed main(){
    cin>>n>>m;
    for(int i=1;i<=100000;i++){
          if(n*i%10==m){
              cout<<i;
              return 0;
          }
    } 
    return 0;
}