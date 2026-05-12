#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (auto &row : a) for (int &x : row) cin >> x;
    sort(a.begin(), a.end(), greater<vector<int>>());
    for (auto &row : a) {
        for (int i = 0; i < m; i++) {
            if (i) cout << ' ';
            cout << row[i];
        }
        cout << '\n';
    }
    return 0;
}
