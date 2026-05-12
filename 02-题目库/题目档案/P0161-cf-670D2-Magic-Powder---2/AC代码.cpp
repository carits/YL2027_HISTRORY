#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;
    auto ok = [&](ll x) {
        ll need = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] * x > b[i]) need += a[i] * x - b[i];
            if (need > k) return false;
        }
        return true;
    };
    ll l = 0, r = 2000000000LL, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (ok(mid)) ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}
