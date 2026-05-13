#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans; 
signed main(){
    cin>>n>>m;
    m=240-m;
    for(int i=1;i<=n;i++){
        ans+=i*5;
        if(ans>m){
            cout<<i-1;
            return 0;
        }
    }
    cout<<n;
    return 0;
}