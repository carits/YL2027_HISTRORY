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
        vector<int> p(n + 1), pos(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        int l = 1;
        while (l <= n && p[l] == n - l + 1) l++;

        if (l <= n) {
            int best = 0, r = l;
            for (int i = l; i <= n; i++) {
                if (p[i] > best) {
                    best = p[i];
                    r = i;
                }
            }
            reverse(p.begin() + l, p.begin() + r + 1);
        }

        for (int i = 1; i <= n; i++) cout << p[i] << " \n"[i == n];
    }
    return 0;
}
