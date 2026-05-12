#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> pre(n);
    for (int i = 0; i < n; i++) {
        cin >> pre[i];
        if (i) pre[i] += pre[i - 1];
    }
    while (m--) {
        ll x;
        cin >> x;
        int p = lower_bound(pre.begin(), pre.end(), x) - pre.begin();
        ll before = p ? pre[p - 1] : 0;
        cout << p + 1 << ' ' << x - before << '\n';
    }
    return 0;
}
