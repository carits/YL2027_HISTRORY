#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L, M;
    cin >> L >> M;

    vector<int> d(L + 2, 0);
    while (M--) {
        int l, r;
        cin >> l >> r;
        d[l]++;
        if (r + 1 <= L + 1) d[r + 1]--;
    }

    int ans = 0, cur = 0;
    for (int i = 0; i <= L; i++) {
        cur += d[i];
        if (cur == 0) ans++;
    }

    cout << ans << '\n';
    return 0;
}
