#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<ll> right_cost(n + 1), left_cost(n + 1);
    for (int i = 1; i < n; i++) {
        right_cost[i] = right_cost[i - 1] + max(0LL, a[i] - a[i + 1]);
    }
    for (int i = 2; i <= n; i++) {
        left_cost[i] = left_cost[i - 1] + max(0LL, a[i] - a[i - 1]);
    }

    while (m--) {
        int s, t;
        cin >> s >> t;
        if (s < t) cout << right_cost[t - 1] - right_cost[s - 1] << '\n';
        else cout << left_cost[s] - left_cost[t] << '\n';
    }
    return 0;
}
