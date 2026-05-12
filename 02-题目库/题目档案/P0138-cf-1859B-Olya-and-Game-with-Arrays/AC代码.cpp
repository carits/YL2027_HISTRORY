#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        ll global_min = (ll)4e18;
        vector<ll> second;
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            vector<ll> a(m);
            for (auto &x : a) cin >> x;
            sort(a.begin(), a.end());
            global_min = min(global_min, a[0]);
            second.push_back(a[1]);
        }
        ll sum = 0;
        for (ll x : second) sum += x;
        sum -= *min_element(second.begin(), second.end());
        sum += global_min;
        cout << sum << '\n';
    }
    return 0;
}
