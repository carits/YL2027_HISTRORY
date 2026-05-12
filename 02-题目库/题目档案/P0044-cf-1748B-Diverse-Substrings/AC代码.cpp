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
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int cnt[10] = {0};
            int diff = 0, mx = 0;
            for (int j = i; j < n && j < i + 100; j++) {
                int d = s[j] - '0';
                if (cnt[d] == 0) diff++;
                cnt[d]++;
                mx = max(mx, cnt[d]);
                if (mx <= diff) ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
