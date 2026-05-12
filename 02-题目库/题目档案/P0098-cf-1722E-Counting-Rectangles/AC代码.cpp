#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum_rect(const vector<vector<ll>> &pre, int x, int y) {
    if (x < 0 || y < 0) return 0;
    x = min(x, 1000);
    y = min(y, 1000);
    return pre[x][y];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<vector<ll>> pre(1001, vector<ll>(1001));
        for (int i = 0; i < n; i++) {
            int h, w;
            cin >> h >> w;
            pre[h][w] += 1LL * h * w;
        }
        for (int i = 1; i <= 1000; i++) {
            for (int j = 1; j <= 1000; j++) {
                pre[i][j] += pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
            }
        }
        while (q--) {
            int hs, ws, hb, wb;
            cin >> hs >> ws >> hb >> wb;
            ll ans = sum_rect(pre, hb - 1, wb - 1)
                   - sum_rect(pre, hs, wb - 1)
                   - sum_rect(pre, hb - 1, ws)
                   + sum_rect(pre, hs, ws);
            cout << ans << '\n';
        }
    }
    return 0;
}
