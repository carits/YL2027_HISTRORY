#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool ok(ll n) {
    for (ll k = 2; 1 + k + k * k <= n; k++) {
        ll sum = 1 + k + k * k;
        ll cur = k * k;
        while (sum < n) {
            if (cur > n / k) break;
            cur *= k;
            sum += cur;
        }
        if (sum == n) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        cout << (ok(n) ? "YES" : "NO") << '\n';
    }
    return 0;
}
