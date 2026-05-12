#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        vector<string> g(8);
        for (int i = 0; i < 8; i++) cin >> g[i];

        bool red = false;
        for (int i = 0; i < 8; i++) {
            bool ok = true;
            for (int j = 0; j < 8; j++) {
                if (g[i][j] != 'R') ok = false;
            }
            if (ok) red = true;
        }

        cout << (red ? 'R' : 'B') << '\n';
    }

    return 0;
}
