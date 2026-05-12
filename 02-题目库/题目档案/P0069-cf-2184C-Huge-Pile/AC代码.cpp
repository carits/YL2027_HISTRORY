#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;

        int ans = -1;
        for (int d = 0; d <= 60; d++) {
            long long den = 1LL << d;
            long long lo = n / den;
            long long hi = (n + den - 1) / den;
            if (k == lo || k == hi) {
                ans = d;
                break;
            }
            if (lo == 0 && hi <= 1 && k > 1) break;
        }
        cout << ans << '\n';
    }
    return 0;
}
