#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long l = 0, r = 1000000, ans = 0;
    while (l <= r) {
        long long mid = (l + r) / 2;
        __int128 v = (__int128)mid * mid * mid;
        if (v <= n) ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}
