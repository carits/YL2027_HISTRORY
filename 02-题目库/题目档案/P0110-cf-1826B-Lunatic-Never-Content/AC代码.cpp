#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
        long long g = 0;
        for (int i = 0; i < n / 2; i++) {
            g = gcd(g, llabs(a[i] - a[n - 1 - i]));
        }
        cout << g << '\n';
    }
    return 0;
}
