#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

bool ok_sum(long long n, int m) {
    long long l = 2, r = 1000000000LL;
    while (l <= r) {
        long long k = (l + r) / 2;
        __int128 cur = 1, sum = 1;
        bool big = false;
        for (int i = 1; i <= m; i++) {
            cur *= k;
            sum += cur;
            if (sum > n) {
                big = true;
                break;
            }
        }
        if (!big && sum == n) return true;
        if (big || sum > n) r = k - 1;
        else l = k + 1;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        bool ans = false;
        for (int m = 2; m <= 60 && !ans; m++) {
            if (ok_sum(n, m)) ans = true;
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }
    return 0;
}
