#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cout.setf(ios::fixed);
    cout << setprecision(10);
    while (T--) {
        int n;
        long double d, h;
        cin >> n >> d >> h;
        vector<long double> y(n);
        for (auto &x : y) cin >> x;
        long double ans = n * d * h / 2.0L;
        for (int i = 1; i < n; i++) {
            long double delta = y[i] - y[i - 1];
            if (delta < h) {
                long double hh = h - delta;
                long double dd = d * hh / h;
                ans -= dd * hh / 2.0L;
            }
        }
        cout << (double)ans << '\n';
    }
    return 0;
}
