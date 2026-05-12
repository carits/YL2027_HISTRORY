#include <bits/stdc++.h>
using namespace std;

const long long MOD=1000000007;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin>>t;
    vector<int> n(t),k(t);
    for(int &x:n) cin>>x;
    int mx=0;
    for(int &x:k){ cin>>x; mx=max(mx,x); }
    vector<long long> pw(mx+1,1);
    for(int i=1;i<=mx;i++) pw[i]=pw[i-1]*2%MOD;
    for(int x:k) cout<<pw[x]<<'\n';
    return 0;
}
