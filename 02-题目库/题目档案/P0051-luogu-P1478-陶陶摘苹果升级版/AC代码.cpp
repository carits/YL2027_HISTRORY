#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, a, b;
    cin >> n >> s;
    cin >> a >> b;
    vector<int> cost;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x <= a + b) cost.push_back(y);
    }
    sort(cost.begin(), cost.end());
    int ans = 0;
    for (int c : cost) {
        if (s >= c) {
            s -= c;
            ans++;
        } else break;
    }
    cout << ans << '\n';
    return 0;
}
