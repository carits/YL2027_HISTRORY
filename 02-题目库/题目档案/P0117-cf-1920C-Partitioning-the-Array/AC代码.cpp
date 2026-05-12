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
        for (auto &x : a) cin >> x;
        int ans = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k) continue;
            long long g = 0;
            for (int i = 0; i + k < n; i++) {
                g = gcd(g, llabs(a[i] - a[i + k]));
            }
            if (g != 1) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
