#include <bits/stdc++.h>
using namespace std;

int msb(long long x) {
    int p = -1;
    while (x) {
        p++;
        x >>= 1;
    }
    return p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long a, b;
        cin >> a >> b;

        int pa = msb(a), pb = msb(b);
        if (pb > pa) {
            cout << -1 << '\n';
        } else if (a == b) {
            cout << 0 << '\n';
        } else if (pa == pb) {
            cout << 1 << '\n';
            cout << (a ^ b) << '\n';
        } else {
            long long full = (1LL << (pa + 1)) - 1;
            long long x1 = a ^ full;
            long long x2 = full ^ b;
            cout << 2 << '\n';
            cout << x1 << ' ' << x2 << '\n';
        }
    }
    return 0;
}
