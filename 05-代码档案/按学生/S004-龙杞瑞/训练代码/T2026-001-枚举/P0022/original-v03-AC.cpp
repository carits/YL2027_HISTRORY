#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,w;
signed main(){
    cin>>k>>n>>w;
    if((1+w)*w/2*k<=n) cout<<0;
    else cout<<(1+w)*w/2*k-n;
    return 0;
}