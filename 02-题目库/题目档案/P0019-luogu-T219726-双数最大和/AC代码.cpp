#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long t;
    cin >> n >> t;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    int l = 0, r = n - 1;
    long long ans = 0;
    while (l < r) {
        long long s = a[l] + a[r];
        if (s <= t) {
            ans = max(ans, s);
            l++;
        } else {
            r--;
        }
    }
    cout << ans << '\n';
    return 0;
}
