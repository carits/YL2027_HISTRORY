#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> fac(n + 1);
    for (int p = 2; p <= n; p++) if (fac[p].empty()) {
        for (int j = p; j <= n; j += p) fac[j].push_back(p);
    }
    vector<int> owner(n + 1, 0), on(n + 1, 0);
    while (m--) {
        char op;
        int x;
        cin >> op >> x;
        if (op == '+') {
            if (on[x]) {
                cout << "Already on\n";
                continue;
            }
            int who = 0;
            for (int p : fac[x]) if (owner[p]) { who = owner[p]; break; }
            if (who) cout << "Conflict with " << who << '\n';
            else {
                on[x] = 1;
                for (int p : fac[x]) owner[p] = x;
                cout << "Success\n";
            }
        } else {
            if (!on[x]) cout << "Already off\n";
            else {
                on[x] = 0;
                for (int p : fac[x]) owner[p] = 0;
                cout << "Success\n";
            }
        }
    }
    return 0;
}
