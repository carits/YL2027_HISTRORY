#include<bits/stdc++.h>
using namespace std;
#define int long long

int k,n,w;
signed main(){
    cin>> k >> n >> w;
    for(int i=1;i<=w;i++){
        n-=(i*k);
    } 
    cout<< max(0,0-n);
    return 0;
}