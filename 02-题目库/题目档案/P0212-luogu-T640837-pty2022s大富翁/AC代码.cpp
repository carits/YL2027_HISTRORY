#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, L, m;
    cin >> n >> L >> m;
    vector<long long> a(L), b(m), ans(n, 0);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    vector<int> pos(n, 0);
    int cur = 0;
    for (long long x : b) {
        pos[cur] = (pos[cur] + x) % L;
        if (a[pos[cur]] > 0) {
            ans[cur] += a[pos[cur]];
            cur = (cur + 1) % n;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i) cout << ' ';
        cout << ans[i];
    }
    cout << '\n';
    return 0;
}
