#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<string>> a(n, vector<string>(m));
    vector<string> all;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            a[i][j] = s.substr(j * k, k);
            all.push_back(a[i][j]);
        }
    }
    string common;
    if (all[0] == all[1] || all[0] == all[2]) common = all[0];
    else common = all[1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != common) {
                cout << i + 1 << ' ' << j + 1 << '\n';
                return 0;
            }
        }
    }
    return 0;
}
