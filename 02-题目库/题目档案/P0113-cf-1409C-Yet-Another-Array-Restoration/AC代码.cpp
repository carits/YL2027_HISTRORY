#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> best;
        int best_max = INT_MAX;
        int diff = y - x;
        for (int d = 1; d <= diff; d++) {
            if (diff % d) continue;
            int between = diff / d + 1;
            if (between > n) continue;
            vector<int> cur;
            for (int v = x; v <= y; v += d) cur.push_back(v);
            int v = x - d;
            while (v > 0 && (int)cur.size() < n) {
                cur.push_back(v);
                v -= d;
            }
            v = y + d;
            while ((int)cur.size() < n) {
                cur.push_back(v);
                v += d;
            }
            sort(cur.begin(), cur.end());
            if (cur.back() < best_max) {
                best_max = cur.back();
                best = cur;
            }
        }
        for (int i = 0; i < (int)best.size(); i++) {
            if (i) cout << ' ';
            cout << best[i];
        }
        cout << '\n';
    }
    return 0;
}
