#include <bits/stdc++.h>
using namespace std;

bool check(const string &s, const string &t) {
    int n = s.size(), m = t.size();
    for (int st = 0; st < n; st++) {
        for (int len = 1; len <= m; len++) {
            bool ok = true;
            for (int k = 0; k < len; k++) {
                int pos = st + k;
                if (pos >= n || s[pos] != t[k]) {
                    ok = false;
                    break;
                }
            }
            if (!ok) continue;
            for (int k = len; k < m; k++) {
                int pos = st + len - 1 - (k - len + 1);
                if (pos < 0 || s[pos] != t[k]) {
                    ok = false;
                    break;
                }
            }
            if (ok) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        cout << (check(s, t) ? "YES" : "NO") << '\n';
    }
    return 0;
}
