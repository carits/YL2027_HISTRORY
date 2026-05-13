#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,s,k,m;
void solve(){
    cin>>s>>k>>m;
    if(m<k) cout<<max(0ll,s-m)<<"\n";
    else cout<<max(0ll,min(s,k)-(m%k))<<"\n";
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while (t--) solve();
    return 0;
}