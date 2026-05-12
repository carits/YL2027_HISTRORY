#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int x = 0, y = 0;
        bool ok = false;

        for (char c : s) {
            if (c == 'U') y++;
            if (c == 'D') y--;
            if (c == 'L') x--;
            if (c == 'R') x++;
            if (x == 1 && y == 1) ok = true;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
