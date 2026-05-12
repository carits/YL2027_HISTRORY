#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int rem = 240 - k;
    int used = 0, ans = 0;

    for (int i = 1; i <= n; i++) {
        used += 5 * i;
        if (used <= rem) ans = i;
    }

    cout << ans << '\n';
    return 0;
}
