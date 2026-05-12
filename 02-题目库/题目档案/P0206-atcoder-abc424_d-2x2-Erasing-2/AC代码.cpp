#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int H, W;
        cin >> H >> W;
        vector<string> s(H);
        for (auto &x : s) cin >> x;
        if (W > H) {
            vector<string> t(W, string(H, '.'));
            for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) t[j][i] = s[i][j];
            s = t;
            swap(H, W);
        }
        int M = 1 << W;
        vector<int> orig(H);
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) if (s[i][j] == '#') orig[i] |= 1 << j;
        }
        vector<vector<int>> cost(H, vector<int>(M, INF));
        for (int i = 0; i < H; i++) {
            for (int m = 0; m < M; m++) if ((m & ~orig[i]) == 0) {
                cost[i][m] = __builtin_popcount((unsigned)(orig[i] ^ m));
            }
        }
        auto ok = [](int a, int b) {
            int x = a & b;
            return (x & (x << 1)) == 0;
        };
        vector<int> dp(M, INF), ndp(M, INF);
        for (int m = 0; m < M; m++) dp[m] = cost[0][m];
        for (int i = 1; i < H; i++) {
            fill(ndp.begin(), ndp.end(), INF);
            for (int pm = 0; pm < M; pm++) if (dp[pm] < INF) {
                for (int cm = 0; cm < M; cm++) if (cost[i][cm] < INF && ok(pm, cm)) {
                    ndp[cm] = min(ndp[cm], dp[pm] + cost[i][cm]);
                }
            }
            dp.swap(ndp);
        }
        cout << *min_element(dp.begin(), dp.end()) << '\n';
    }
    return 0;
}
