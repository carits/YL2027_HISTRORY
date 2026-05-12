#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<int, int> get_digits(ll x) {
    int mn = 9, mx = 0;
    while (x) {
        int d = x % 10;
        mn = min(mn, d);
        mx = max(mx, d);
        x /= 10;
    }
    return {mn, mx};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll a, k;
        cin >> a >> k;
        for (ll step = 1; step < k; step++) {
            auto [mn, mx] = get_digits(a);
            if (mn == 0) break;
            a += 1LL * mn * mx;
        }
        cout << a << '\n';
    }
    return 0;
}
