#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll S;
    cin >> n >> S;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    auto cost = [&](int k) {
        vector<ll> v;
        for (int i = 1; i <= n; i++) v.push_back(a[i] + 1LL * i * k);
        sort(v.begin(), v.end());
        ll s = 0;
        for (int i = 0; i < k; i++) s += v[i];
        return s;
    };
    int l = 0, r = n, best = 0;
    ll bestCost = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        ll c = cost(mid);
        if (c <= S) best = mid, bestCost = c, l = mid + 1;
        else r = mid - 1;
    }
    cout << best << ' ' << bestCost << '\n';
    return 0;
}
