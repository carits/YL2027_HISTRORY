#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        vector<string> g(3);
        for (auto &s : g) cin >> s;
        char ans = '.';
        auto check = [&](char a, char b, char c) {
            if (a != '.' && a == b && b == c) ans = a;
        };
        for (int i = 0; i < 3; i++) check(g[i][0], g[i][1], g[i][2]);
        for (int j = 0; j < 3; j++) check(g[0][j], g[1][j], g[2][j]);
        check(g[0][0], g[1][1], g[2][2]);
        check(g[0][2], g[1][1], g[2][0]);
        if (ans == '.') cout << "DRAW\n";
        else cout << ans << '\n';
    }
    return 0;
}
