#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());
    auto ok = [&](int d) {
        int cnt = 1, last = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] - last >= d) {
                cnt++;
                last = a[i];
            }
        }
        return cnt >= c;
    };
    int l = 0, r = a.back() - a.front(), ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (ok(mid)) ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}
