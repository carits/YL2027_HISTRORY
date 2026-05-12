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
        for (auto &x : a) if (x % 10 == 5) x += 5;
        bool has0 = false;
        for (auto x : a) if (x % 10 == 0) has0 = true;
        if (has0) {
            bool ok = true;
            for (auto x : a) if (x != a[0]) ok = false;
            cout << (ok ? "Yes" : "No") << '\n';
        } else {
            for (auto &x : a) {
                while (x % 10 != 2) x += x % 10;
            }
            bool ok = true;
            for (auto x : a) if (x % 20 != a[0] % 20) ok = false;
            cout << (ok ? "Yes" : "No") << '\n';
        }
    }
    return 0;
}
