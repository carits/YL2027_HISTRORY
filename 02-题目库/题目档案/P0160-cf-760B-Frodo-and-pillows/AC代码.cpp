#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll side(ll x, ll len) {
    if (x - 1 >= len) return len * x - len * (len + 1) / 2;
    return x * (x - 1) / 2 + (len - (x - 1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;
    ll l = 1, r = m, ans = 1;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll need = mid + side(mid, k - 1) + side(mid, n - k);
        if (need <= m) ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}
