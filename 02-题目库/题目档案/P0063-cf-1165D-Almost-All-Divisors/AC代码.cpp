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
        vector<ll> d(n);
        for (ll &x : d) cin >> x;
        sort(d.begin(), d.end());

        ll cand = d.front() * d.back();
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (d[i] * d[n - 1 - i] != cand) ok = false;
        }

        vector<ll> real;
        for (ll i = 2; i * i <= cand; i++) {
            if (cand % i == 0) {
                real.push_back(i);
                if (i * i != cand) real.push_back(cand / i);
            }
        }
        sort(real.begin(), real.end());
        if (real != d) ok = false;

        cout << (ok ? cand : -1) << '\n';
    }
    return 0;
}
