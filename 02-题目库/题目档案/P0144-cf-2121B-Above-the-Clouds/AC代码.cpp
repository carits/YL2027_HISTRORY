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
        vector<int> cnt(26);
        for (char c : s) cnt[c - 'a']++;
        bool ok = false;
        for (int i = 1; i + 1 < n; i++) if (cnt[s[i] - 'a'] >= 2) ok = true;
        cout << (ok ? "Yes" : "No") << '\n';
    }
    return 0;
}
