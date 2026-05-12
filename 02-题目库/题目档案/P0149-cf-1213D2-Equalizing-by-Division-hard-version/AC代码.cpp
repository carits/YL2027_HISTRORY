#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int mx = 0;
    for (int &x : a) cin >> x, mx = max(mx, x);
    vector<vector<int>> c(mx + 1);
    for (int x : a) {
        int step = 0;
        while (true) {
            c[x].push_back(step);
            if (x == 0) break;
            x /= 2;
            step++;
        }
    }
    int ans = 1e9;
    for (auto &v : c) {
        if ((int)v.size() >= k) {
            nth_element(v.begin(), v.begin() + k, v.end());
            int s = 0;
            for (int i = 0; i < k; i++) s += v[i];
            ans = min(ans, s);
        }
    }
    cout << ans << '\n';
    return 0;
}
