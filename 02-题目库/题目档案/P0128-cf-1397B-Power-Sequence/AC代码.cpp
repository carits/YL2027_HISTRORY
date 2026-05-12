#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    const ll INF = (ll)4e18;
    ll ans = INF;
    for (ll c = 1; ; c++) {
        __int128 p = 1;
        __int128 cost = 0;
        bool big = false;
        for (int i = 0; i < n; i++) {
            cost += llabs(a[i] - (ll)min<__int128>(p, (__int128)INF));
            if (cost > ans) big = true;
            if (i + 1 < n) {
                p *= c;
                if (p > (__int128)4e18) big = true;
            }
        }
        if (cost < ans) ans = (ll)cost;
        if (c > 1 && big && p > a.back() + ans + 10) break;
        if (c > 100000) break;
    }
    cout << ans << '\n';
    return 0;
}
