#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if ((int)q.size() < m) {
            q.push(x);
        } else {
            int t = q.top();
            q.pop();
            q.push(t + x);
        }
    }

    int ans = 0;
    while (!q.empty()) {
        ans = max(ans, q.top());
        q.pop();
    }
    cout << ans << '\n';
    return 0;
}
