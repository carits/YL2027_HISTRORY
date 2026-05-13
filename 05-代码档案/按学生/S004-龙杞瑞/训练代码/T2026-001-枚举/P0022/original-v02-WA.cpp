#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,w;
signed main(){
    cin>>k>>n>>w;
    cout<<(1+w)*w/2*k-n;
    return 0;
}