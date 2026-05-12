#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int ans = 0;
        for (int i = 0; i < n; ) {
            if (s[i] == 'W') i++;
            else {
                ans++;
                i += k;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
