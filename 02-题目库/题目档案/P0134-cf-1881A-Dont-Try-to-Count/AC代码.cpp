#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        int ans = -1;
        for (int op = 0; op <= 8; op++) {
            if (x.find(s) != string::npos) {
                ans = op;
                break;
            }
            x += x;
        }
        cout << ans << '\n';
    }
    return 0;
}
