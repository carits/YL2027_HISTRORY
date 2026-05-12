#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;
    string s, t;
    cin >> s >> t;
    s = ' ' + s;

    vector<int> pre(n + 1, 0);
    for (int i = 1; i + m - 1 <= n; i++) {
        bool ok = true;
        for (int j = 0; j < m; j++) {
            if (s[i + j] != t[j]) {
                ok = false;
                break;
            }
        }
        pre[i] = pre[i - 1] + ok;
    }
    for (int i = max(1, n - m + 2); i <= n; i++) pre[i] = pre[i - 1];

    while (q--) {
        int l, r;
        cin >> l >> r;
        if (r - l + 1 < m) cout << 0 << '\n';
        else cout << pre[r - m + 1] - pre[l - 1] << '\n';
    }
    return 0;
}
