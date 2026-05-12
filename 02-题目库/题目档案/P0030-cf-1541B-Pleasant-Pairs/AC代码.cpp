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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int v = a[i]; v <= 2 * n; v += a[i]) {
                int j = v - i;
                if (j > i && j <= n && 1LL * a[i] * a[j] == i + j) ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
