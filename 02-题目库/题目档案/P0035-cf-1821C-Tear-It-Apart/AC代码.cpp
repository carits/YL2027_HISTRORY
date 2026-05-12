#include <bits/stdc++.h>
using namespace std;

int need(int x) {
    int c = 0;
    while (x > 0) {
        x /= 2;
        c++;
    }
    return c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int ans = 30;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int mx = 0, cur = 0;
            for (char c : s) {
                if (c == ch) {
                    mx = max(mx, cur);
                    cur = 0;
                } else {
                    cur++;
                }
            }
            mx = max(mx, cur);
            ans = min(ans, need(mx));
        }
        cout << ans << '\n';
    }
    return 0;
}
