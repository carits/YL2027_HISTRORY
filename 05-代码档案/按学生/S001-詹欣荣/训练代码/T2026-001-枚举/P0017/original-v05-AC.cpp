#include<bits/stdc++.h>
using namespace std;
int ans=1000000;
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=n/a;i++){
        for(int j=0;j<=n/b;j++){
            if(n-i*a-j*b<0){
                break;
            }
            if((n-i*a-j*b)%c==0){
                ans=min(ans,i+j+(n-i*a-j*b)/c);
            }
        }
    } 
    cout<<ans;
    return 0;
}