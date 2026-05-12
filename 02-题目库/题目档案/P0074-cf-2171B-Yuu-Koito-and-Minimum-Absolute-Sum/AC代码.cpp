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

        if (a[0] == -1 && a[n - 1] == -1) {
            a[0] = a[n - 1] = 0;
        } else if (a[0] == -1) {
            a[0] = a[n - 1];
        } else if (a[n - 1] == -1) {
            a[n - 1] = a[0];
        }

        for (int i = 1; i + 1 < n; i++) {
            if (a[i] == -1) a[i] = 0;
        }

        cout << llabs(a[n - 1] - a[0]) << '\n';
        for (int i = 0; i < n; i++) cout << a[i] << " \n"[i + 1 == n];
    }
    return 0;
}
