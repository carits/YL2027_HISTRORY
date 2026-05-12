#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int m = 0;
    while ((1 << m) < n) m++;
    cout << m << '\n';
    for (int b = 0; b < m; b++) {
        vector<int> team;
        for (int i = 1; i <= n; i++) if (((i - 1) >> b) & 1) team.push_back(i);
        cout << team.size();
        for (int x : team) cout << ' ' << x;
        cout << '\n';
    }
    return 0;
}
