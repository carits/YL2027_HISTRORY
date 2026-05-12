#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    cin >> n >> k;
    vector<int> h(n), w(n);
    int r = 0;
    for (int i = 0; i < n; i++) cin >> h[i] >> w[i], r = max(r, min(h[i], w[i]));
    int l = 1, ans = 1;
    auto ok = [&](int x) {
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += 1LL * (h[i] / x) * (w[i] / x);
            if (cnt >= k) return true;
        }
        return false;
    };
    while (l <= r) {
        int mid = (l + r) / 2;
        if (ok(mid)) ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}
