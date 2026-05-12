#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        if (it != a.end() && *it == x) cout << (it - a.begin() + 1);
        else cout << -1;
        if (i + 1 < m) cout << ' ';
    }
    cout << '\n';
    return 0;
}
