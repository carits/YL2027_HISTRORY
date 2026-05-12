#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
    for (int j = 0; j < m; j++) {
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) v.push_back({-a[i][j], i + 1});
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            if (i) cout << ' ';
            cout << v[i].second;
        }
        cout << '\n';
    }
    return 0;
}
