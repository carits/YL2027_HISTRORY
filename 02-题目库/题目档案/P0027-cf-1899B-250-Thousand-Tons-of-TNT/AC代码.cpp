#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<ll> a(n + 1), s(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i], s[i] = s[i - 1] + a[i];
        ll ans = 0;
        for(int len = 1; len <= n; len++){
            if(n % len) continue;
            ll mn = LLONG_MAX, mx = LLONG_MIN;
            for(int l = 1; l <= n; l += len){
                ll cur = s[l + len - 1] - s[l - 1];
                mn = min(mn, cur);
                mx = max(mx, cur);
            }
            ans = max(ans, mx - mn);
        }
        cout << ans << "\n";
    }
    return 0;
}
