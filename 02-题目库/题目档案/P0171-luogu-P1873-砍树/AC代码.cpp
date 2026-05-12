#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll m;
    cin >> n >> m;
    vector<int> a(n);
    int mx = 0;
    for (int &x : a) cin >> x, mx = max(mx, x);
    int l = 0, r = mx, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        ll got = 0;
        for (int x : a) if (x > mid) got += x - mid;
        if (got >= m) ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}
