#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll ans = (1LL << 60);
    for (ll a = 1; a * a <= n + 100000; a++) {
        ll b = (n + a - 1) / a;
        ans = min(ans, a + b);
    }
    cout << ans << '\n';
    return 0;
}
