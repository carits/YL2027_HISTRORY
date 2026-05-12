#include <bits/stdc++.h>
using namespace std;

int get_sum(const vector<vector<int>> &pre, int x1, int y1, int x2, int y2) {
    if (x1 > x2 || y1 > y2) return 0;
    return pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> g(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> g[i];
        g[i] = " " + g[i];
    }

    vector<vector<int>> hor(n + 1, vector<int>(m + 1));
    vector<vector<int>> ver(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j < m && g[i][j] == '.' && g[i][j + 1] == '.') hor[i][j] = 1;
            if (i < n && g[i][j] == '.' && g[i + 1][j] == '.') ver[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            hor[i][j] += hor[i - 1][j] + hor[i][j - 1] - hor[i - 1][j - 1];
            ver[i][j] += ver[i - 1][j] + ver[i][j - 1] - ver[i - 1][j - 1];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = get_sum(hor, x1, y1, x2, y2 - 1) + get_sum(ver, x1, y1, x2 - 1, y2);
        cout << ans << '\n';
    }
    return 0;
}
