#include <bits/stdc++.h>
using namespace std;

bool solve_one(int a, int b, string s, string &res) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int j = n - 1 - i;
        if (s[i] != '?' && s[j] != '?' && s[i] != s[j]) return false;
        if (s[i] == '?' && s[j] != '?') s[i] = s[j];
        if (s[j] == '?' && s[i] != '?') s[j] = s[i];
    }

    int c0 = 0, c1 = 0;
    for (char c : s) {
        if (c == '0') c0++;
        else if (c == '1') c1++;
    }
    if (c0 > a || c1 > b) return false;

    for (int i = 0; i < n / 2; i++) {
        int j = n - 1 - i;
        if (s[i] == '?' && s[j] == '?') {
            if (a - c0 >= 2) {
                s[i] = s[j] = '0';
                c0 += 2;
            } else if (b - c1 >= 2) {
                s[i] = s[j] = '1';
                c1 += 2;
            } else return false;
        }
    }

    if (n % 2 == 1 && s[n / 2] == '?') {
        if (a - c0 == 1) {
            s[n / 2] = '0';
            c0++;
        } else if (b - c1 == 1) {
            s[n / 2] = '1';
            c1++;
        } else return false;
    }

    if (c0 != a || c1 != b) return false;
    for (int i = 0; i < n; i++) if (s[i] != s[n - 1 - i]) return false;
    res = s;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int a, b;
        string s, res;
        cin >> a >> b >> s;
        if (solve_one(a, b, s, res)) cout << res << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}
