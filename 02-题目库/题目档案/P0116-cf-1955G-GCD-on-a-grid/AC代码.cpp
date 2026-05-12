#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) cin >> a[i][j];

        int g = gcd(a[0][0], a[n - 1][m - 1]);
        vector<int> divs;
        for (int d = 1; 1LL * d * d <= g; d++) {
            if (g % d == 0) {
                divs.push_back(d);
                if (d * d != g) divs.push_back(g / d);
            }
        }
        sort(divs.rbegin(), divs.rend());

        int ans = 1;
        for (int d : divs) {
            vector<vector<char>> dp(n, vector<char>(m));
            if (a[0][0] % d == 0) dp[0][0] = 1;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (a[i][j] % d) continue;
                    if (i) dp[i][j] |= dp[i - 1][j];
                    if (j) dp[i][j] |= dp[i][j - 1];
                }
            }
            if (dp[n - 1][m - 1]) {
                ans = d;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
