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
        vector<long long> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;

            long long mn = LLONG_MAX;
            long long mx = LLONG_MIN;

            for (int l = 0; l < n; l += k) {
                long long s = 0;
                for (int i = l; i < l + k; i++) {
                    s += a[i];
                }
                mn = min(mn, s);
                mx = max(mx, s);
            }

            ans = max(ans, mx - mn);
        }

        cout << ans << '\n';
    }

    return 0;
}
