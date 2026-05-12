#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long s, k, m;
        cin >> s >> k >> m;

        if (m < k) {
            cout << max(0LL, s - m) << '\n';
        } else {
            long long top = min(s, k);
            long long used = m % k;
            cout << max(0LL, top - used) << '\n';
        }
    }
    return 0;
}
