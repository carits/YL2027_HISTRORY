#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<int, ll> cnt[2];
    cnt[0][0] = 1;
    int x = 0;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        x ^= a;
        int p = i & 1;
        ans += cnt[p][x];
        cnt[p][x]++;
    }
    cout << ans << '\n';
    return 0;
}
