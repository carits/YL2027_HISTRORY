#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p;
    cin >> n >> p;
    vector<ll> a(n + 2), diff(n + 3);
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (p--) {
        int x, y;
        ll z;
        cin >> x >> y >> z;
        diff[x] += z;
        diff[y + 1] -= z;
    }
    ll cur = 0, ans = LLONG_MAX;
    for (int i = 1; i <= n; i++) {
        cur += diff[i];
        ans = min(ans, a[i] + cur);
    }
    cout << ans << '\n';
    return 0;
}
