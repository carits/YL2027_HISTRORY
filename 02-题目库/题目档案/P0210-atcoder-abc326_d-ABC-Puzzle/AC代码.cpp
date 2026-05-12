#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string R, C;
    cin >> n >> R >> C;

    vector<string> rows;
    string base(n, '.');
    vector<int> pos(n);
    iota(pos.begin(), pos.end(), 0);

    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) if (b != a) {
            for (int c = 0; c < n; c++) if (c != a && c != b) {
                string s(n, '.');
                s[a] = 'A';
                s[b] = 'B';
                s[c] = 'C';
                rows.push_back(s);
            }
        }
    }

    vector<vector<string>> cand(n);
    for (int i = 0; i < n; i++) {
        for (auto s : rows) {
            for (char ch : s) {
                if (ch != '.') {
                    if (ch == R[i]) cand[i].push_back(s);
                    break;
                }
            }
        }
    }

    vector<string> ans(n, string(n, '.'));
    vector<array<int, 3>> cnt(n);
    vector<char> first(n, '?');

    function<bool(int)> dfs = [&](int r) -> bool {
        if (r == n) {
            for (int j = 0; j < n; j++) {
                if (cnt[j][0] != 1 || cnt[j][1] != 1 || cnt[j][2] != 1) return false;
                if (first[j] != C[j]) return false;
            }
            return true;
        }

        for (const string &s : cand[r]) {
            bool ok = true;
            vector<char> old_first = first;

            for (int j = 0; j < n; j++) {
                if (s[j] == '.') continue;
                int id = s[j] - 'A';
                if (cnt[j][id]) ok = false;
                if (first[j] == '?') first[j] = s[j];
            }
            for (int j = 0; j < n; j++) {
                if (first[j] != '?' && first[j] != C[j]) ok = false;
            }

            if (ok) {
                for (int j = 0; j < n; j++) {
                    if (s[j] != '.') cnt[j][s[j] - 'A']++;
                }
                ans[r] = s;

                if (dfs(r + 1)) return true;

                for (int j = 0; j < n; j++) {
                    if (s[j] != '.') cnt[j][s[j] - 'A']--;
                }
            }
            first = old_first;
        }
        return false;
    };

    if (dfs(0)) {
        cout << "Yes\n";
        for (auto &s : ans) cout << s << '\n';
    } else {
        cout << "No\n";
    }

    return 0;
}
