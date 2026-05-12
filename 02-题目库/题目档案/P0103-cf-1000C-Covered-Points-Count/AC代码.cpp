#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<ll, int>> ev;
    ev.reserve(2 * n);
    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        ev.push_back({l, 1});
        ev.push_back({r + 1, -1});
    }
    sort(ev.begin(), ev.end());

    vector<ll> ans(n + 1);
    ll last = ev[0].first;
    int cur = 0;
    for (int i = 0; i < (int)ev.size();) {
        ll x = ev[i].first;
        if (x > last && cur > 0) ans[cur] += x - last;
        while (i < (int)ev.size() && ev[i].first == x) {
            cur += ev[i].second;
            i++;
        }
        last = x;
    }
    for (int k = 1; k <= n; k++) {
        if (k > 1) cout << ' ';
        cout << ans[k];
    }
    cout << '\n';
    return 0;
}
