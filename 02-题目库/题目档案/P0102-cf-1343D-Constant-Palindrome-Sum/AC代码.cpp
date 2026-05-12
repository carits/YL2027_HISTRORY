#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<int> diff(2 * k + 3), exact(2 * k + 3);
        int pairs = n / 2;
        for (int i = 1; i <= pairs; i++) {
            int u = a[i], v = a[n + 1 - i];
            int l = min(u, v) + 1;
            int r = max(u, v) + k;
            diff[l] -= 1;
            diff[r + 1] += 1;
            exact[u + v] -= 1;
        }

        int cur = 0, ans = 2 * pairs;
        for (int x = 2; x <= 2 * k; x++) {
            cur += diff[x];
            ans = min(ans, 2 * pairs + cur + exact[x]);
        }
        cout << ans << '\n';
    }
    return 0;
}
