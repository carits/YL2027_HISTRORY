#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }

    vector<string> pat = {
        "..+---+",
        "./   /|",
        "+---+ |",
        "|   | +",
        "|   |/.",
        "+---+.."
    };

    const int H = 700, W = 700;
    vector<string> g(H, string(W, '.'));
    int base = 500;

    for (int i = 0; i < m; i++) {
        int back = m - 1 - i;
        for (int k = 0; k < 105; k++) {
            for (int j = 0; j < n; j++) {
                if (k >= a[i][j]) continue;
                int r = base - 2 * back - 3 * k;
                int c = 2 * back + 4 * j;
                for (int x = 0; x < 6; x++) {
                    for (int y = 0; y < 7; y++) {
                        if (pat[x][y] != '.') g[r + x][c + y] = pat[x][y];
                    }
                }
            }
        }
    }

    int r1 = H, r2 = -1, c1 = W, c2 = -1;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (g[i][j] != '.') {
                r1 = min(r1, i);
                r2 = max(r2, i);
                c1 = min(c1, j);
                c2 = max(c2, j);
            }
        }
    }

    for (int i = r1; i <= r2; i++) {
        for (int j = c1; j <= c2; j++) cout << g[i][j];
        cout << '\n';
    }
    return 0;
}
