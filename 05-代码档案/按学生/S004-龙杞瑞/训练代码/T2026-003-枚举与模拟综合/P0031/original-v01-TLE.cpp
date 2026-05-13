#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a;
int get_min(int x) {
    int mn=9;
    while(x){
        mn=min(mn,x%10);
        x/=10;
    }
    return mn;
}
int get_max(int x) {
    int mx=0;
    while(x){
        mx=max(mx,x%10);
        x/=10;
    }
    return mx;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>a>>n;
        for (int i=2;i<=n;i++) {
            int mn=get_min(a);
            int mx=get_max(a);
            a+=mn*mx;
        }
        cout<<a<<'\n';
    }
    return 0;
}