#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    for (int x = 100; x <= 999; x++) {
        int t = x, s = 0;
        while (t) {
            s += t % 10;
            t /= 10;
        }
        ans += (s == n);
    }
    cout << ans << '\n';
    return 0;
}
