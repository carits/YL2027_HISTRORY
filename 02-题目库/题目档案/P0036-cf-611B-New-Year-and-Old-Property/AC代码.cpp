#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    set<ll> st;
    for (int len = 2; len <= 60; len++) {
        ll all = (1LL << len) - 1;
        for (int z = 0; z <= len - 2; z++) {
            ll x = all ^ (1LL << z);
            st.insert(x);
        }
    }
    int ans = 0;
    for (ll x : st) if (a <= x && x <= b) ans++;
    cout << ans << '\n';
    return 0;
}
