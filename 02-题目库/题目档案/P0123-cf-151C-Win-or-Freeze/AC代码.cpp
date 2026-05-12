#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll q;
    cin >> q;
    ll x = q;
    vector<ll> f;
    for (ll p = 2; p * p <= x; p += (p == 2 ? 1 : 2)) {
        while (x % p == 0) {
            f.push_back(p);
            x /= p;
        }
    }
    if (x > 1) f.push_back(x);
    if ((int)f.size() == 2) {
        cout << 2 << '\n';
    } else {
        cout << 1 << '\n';
        if ((int)f.size() < 2) cout << 0 << '\n';
        else cout << f[0] * f[1] << '\n';
    }
    return 0;
}
