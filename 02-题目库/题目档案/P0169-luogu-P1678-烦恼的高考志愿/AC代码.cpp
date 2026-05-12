#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    vector<int> a(m);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());
    ll ans = 0;
    while (n--) {
        int x;
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        int best = INT_MAX;
        if (it != a.end()) best = min(best, abs(*it - x));
        if (it != a.begin()) best = min(best, abs(*prev(it) - x));
        ans += best;
    }
    cout << ans << '\n';
    return 0;
}
