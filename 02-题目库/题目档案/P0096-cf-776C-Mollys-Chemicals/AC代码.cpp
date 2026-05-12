#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    const ll LIM = (ll)4e14;
    vector<ll> powers;
    if (k == 1) powers = {1};
    else if (k == -1) powers = {1, -1};
    else if (k == 0) powers = {1, 0};
    else {
        ll cur = 1;
        while (llabs(cur) <= LIM) {
            powers.push_back(cur);
            if (llabs(cur) > LIM / llabs(k)) break;
            cur *= k;
        }
    }
    sort(powers.begin(), powers.end());
    powers.erase(unique(powers.begin(), powers.end()), powers.end());

    unordered_map<ll, ll> cnt;
    cnt.reserve(2 * n + 10);
    cnt[0] = 1;
    ll sum = 0, ans = 0;
    for (ll x : a) {
        sum += x;
        for (ll p : powers) {
            auto it = cnt.find(sum - p);
            if (it != cnt.end()) ans += it->second;
        }
        cnt[sum]++;
    }
    cout << ans << '\n';
    return 0;
}
