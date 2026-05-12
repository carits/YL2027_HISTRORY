#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<ll, ll> cnt;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        for (int k = 0; k <= 31; k++) {
            ll p = 1LL << k;
            auto it = cnt.find(p - x);
            if (it != cnt.end()) ans += it->second;
        }
        cnt[x]++;
    }
    cout << ans << '\n';
    return 0;
}
