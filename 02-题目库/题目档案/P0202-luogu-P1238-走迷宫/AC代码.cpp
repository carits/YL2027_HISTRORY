#include <bits/stdc++.h>
using namespace std;

int m, n, sx, sy, tx, ty;
int g[20][20], vis[20][20];
vector<pair<int, int>> path;
bool found = false;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};

void print_path() {
    found = true;
    for (int i = 0; i < (int)path.size(); i++) {
        if (i) cout << "->";
        cout << '(' << path[i].first << ',' << path[i].second << ')';
    }
    cout << '\n';
}

void dfs(int x, int y) {
    if (x == tx && y == ty) {
        print_path();
        return;
    }

    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k], ny = y + dy[k];
        if (nx < 1 || nx > m || ny < 1 || ny > n) continue;
        if (!g[nx][ny] || vis[nx][ny]) continue;
        vis[nx][ny] = 1;
        path.push_back({nx, ny});
        dfs(nx, ny);
        path.pop_back();
        vis[nx][ny] = 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) cin >> g[i][j];
    }
    cin >> sx >> sy >> tx >> ty;

    if (g[sx][sy]) {
        vis[sx][sy] = 1;
        path.push_back({sx, sy});
        dfs(sx, sy);
    }

    if (!found) cout << -1 << '\n';
    return 0;
}
