#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,p,lt,tt;
void solve(){
    cin>>n>>p>>lt>>tt; 
    int ji=(n+6)/7; 
    int l=-1,r=n; 
    while(l+1<r){
        int mid=l+r>>1;
        int x=mid*lt+min(ji,mid*2)*tt;
        if(x>=p) r=mid;
        else l=mid;
    }
    cout<<n-r<<'\n';
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--) solve();
    return 0;
}