#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    for (int x = 1; x <= n; x++) {
        int t = x, cnt = 0;
        for (int p = 2; p * p <= t; p++) {
            if (t % p == 0) {
                cnt++;
                while (t % p == 0) t /= p;
            }
        }
        if (t > 1) cnt++;
        if (cnt == 2) ans++;
    }
    cout << ans << '\n';
    return 0;
}
