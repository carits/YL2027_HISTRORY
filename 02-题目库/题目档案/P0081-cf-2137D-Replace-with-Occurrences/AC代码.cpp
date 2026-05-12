#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> b(n), ans(n, 0);
        vector<vector<int>> pos(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            pos[b[i]].push_back(i);
        }
        bool ok = true;
        int id = 1;
        for (int x = 1; x <= n; x++) {
            if (pos[x].empty()) continue;
            if ((int)pos[x].size() % x != 0) {
                ok = false;
                break;
            }
            for (int i = 0; i < (int)pos[x].size(); i += x) {
                for (int j = i; j < i + x; j++) ans[pos[x][j]] = id;
                id++;
            }
        }
        if (!ok) cout << -1 << '\n';
        else {
            for (int i = 0; i < n; i++) cout << ans[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
    return 0;
}
