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
        vector<string> a(n);
        for (auto &s : a) cin >> s;
        int ans = 0;
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < (n + 1) / 2; j++) {
                vector<char> v = {
                    a[i][j],
                    a[j][n - 1 - i],
                    a[n - 1 - i][n - 1 - j],
                    a[n - 1 - j][i]
                };
                char mx = *max_element(v.begin(), v.end());
                for (char c : v) ans += mx - c;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
