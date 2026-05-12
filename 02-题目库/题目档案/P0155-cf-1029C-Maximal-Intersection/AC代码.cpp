#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++) cin >> l[i] >> r[i];
    const int INF = 1e9 + 7;
    vector<int> preL(n + 1, 0), preR(n + 1, INF), sufL(n + 1, 0), sufR(n + 1, INF);
    for (int i = 0; i < n; i++) {
        preL[i + 1] = max(preL[i], l[i]);
        preR[i + 1] = min(preR[i], r[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        sufL[i] = max(sufL[i + 1], l[i]);
        sufR[i] = min(sufR[i + 1], r[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int L = max(preL[i], sufL[i + 1]);
        int R = min(preR[i], sufR[i + 1]);
        ans = max(ans, R - L);
    }
    cout << ans << '\n';
    return 0;
}
