#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,k,mk,ans;
signed main(){
    cin>> n >> k;
    mk=240-k;
    for(int i=1;i<=n+1;i++){
        ans+=(i*5);
        if(i==n+1||ans>mk){
            cout<< i-1;
            break;
        }
    }
    return 0;
}