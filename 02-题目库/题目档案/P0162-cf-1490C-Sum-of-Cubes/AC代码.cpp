#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> cubes;
    unordered_set<ll> st;
    for (ll i = 1; i * i * i <= 1000000000000LL; i++) {
        ll v = i * i * i;
        cubes.push_back(v);
        st.insert(v);
    }
    int T;
    cin >> T;
    while (T--) {
        ll x;
        cin >> x;
        bool ok = false;
        for (ll v : cubes) {
            if (v >= x) break;
            if (st.count(x - v)) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
