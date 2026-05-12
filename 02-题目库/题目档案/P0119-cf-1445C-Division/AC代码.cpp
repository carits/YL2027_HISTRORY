#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll p, q;
        cin >> p >> q;
        if (p % q != 0) {
            cout << p << '\n';
            continue;
        }
        ll tmp = q;
        vector<ll> fac;
        for (ll d = 2; d * d <= tmp; d++) {
            if (tmp % d == 0) {
                fac.push_back(d);
                while (tmp % d == 0) tmp /= d;
            }
        }
        if (tmp > 1) fac.push_back(tmp);

        ll ans = 1;
        for (ll f : fac) {
            ll x = p;
            while (x % q == 0) x /= f;
            ans = max(ans, x);
        }
        cout << ans << '\n';
    }
    return 0;
}
