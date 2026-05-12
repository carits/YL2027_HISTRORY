#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    auto ok = [&](ll v) {
        ll s = 0, cur = v;
        while (cur) {
            s += cur;
            if (s >= n) return true;
            cur /= k;
        }
        return false;
    };
    ll l = 1, r = n, ans = n;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (ok(mid)) ans = mid, r = mid - 1;
        else l = mid + 1;
    }
    cout << ans << '\n';
    return 0;
}
