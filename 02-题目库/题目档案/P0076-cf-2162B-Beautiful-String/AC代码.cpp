#include <bits/stdc++.h>
using namespace std;

bool palindrome(const string &s) {
    for (int l = 0, r = (int)s.size() - 1; l < r; l++, r--) {
        if (s[l] != s[r]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        bool ok = false;
        vector<int> ans;

        for (int mask = 0; mask < (1 << n) && !ok; mask++) {
            string p, rest;
            vector<int> idx;
            for (int i = 0; i < n; i++) {
                if (mask >> i & 1) {
                    p += s[i];
                    idx.push_back(i + 1);
                } else {
                    rest += s[i];
                }
            }

            bool nondec = true;
            for (int i = 1; i < (int)p.size(); i++) {
                if (p[i - 1] > p[i]) nondec = false;
            }

            if (nondec && palindrome(rest)) {
                ok = true;
                ans = idx;
            }
        }

        if (!ok) {
            cout << -1 << '\n';
        } else {
            cout << ans.size() << '\n';
            if (!ans.empty()) {
                for (int i = 0; i < (int)ans.size(); i++) {
                    cout << ans[i] << " \n"[i + 1 == (int)ans.size()];
                }
            }
        }
    }
    return 0;
}
