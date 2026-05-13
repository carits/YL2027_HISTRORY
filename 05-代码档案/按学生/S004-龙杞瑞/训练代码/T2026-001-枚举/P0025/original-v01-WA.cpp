#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m; 
signed main(){
    cin>>n>>m;
    for(int i=1;i<=100000;i++){
          n-=10;
          if(n%m==0&&n/m<10){
              cout<<n/m;
              return 0;
          }
    } 
    return 0;
}