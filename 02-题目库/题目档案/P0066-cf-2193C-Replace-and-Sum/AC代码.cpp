#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 2), b(n + 2), suf(n + 3), pre(n + 3);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        for (int i = n; i >= 1; i--) suf[i] = max(suf[i + 1], max(a[i], b[i]));
        for (int i = 1; i <= n; i++) pre[i] = pre[i - 1] + suf[i];
        for (int i = 1; i <= q; i++) {
            int l, r;
            cin >> l >> r;
            cout << pre[r] - pre[l - 1] << (i == q ? '\n' : ' ');
        }
    }
    return 0;
}
