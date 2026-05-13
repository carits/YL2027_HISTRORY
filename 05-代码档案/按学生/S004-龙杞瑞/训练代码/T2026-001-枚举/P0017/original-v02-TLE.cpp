#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a,b,c,sum=1e9;
signed main(){
    cin>>n>>a>>b>>c;
    int mini=min(a,min(b,c));
    int x=ceil(1.0*n/1.0*mini);
    for(int i=0;i<=x;i++){
        if(i*a>n) break;
        for(int j=0;j<=x;j++){
        if(i*a+j*b>n) break;
           for(int k=0;k<=x;k++){
               if(i*a+j*b+k*c==n){
                   sum=min(sum,i+j+k);
               }else if(i*a+j*b+k*c>n) break;
           }
        }
    }
    cout<<sum;
    return 0;
}