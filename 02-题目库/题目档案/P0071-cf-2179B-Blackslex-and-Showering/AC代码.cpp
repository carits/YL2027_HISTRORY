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
        vector<int> a(n);
        for (int &x : a) cin >> x;

        long long total = 0;
        for (int i = 0; i + 1 < n; i++) total += abs(a[i + 1] - a[i]);

        long long best = max(abs(a[1] - a[0]), abs(a[n - 1] - a[n - 2]));
        for (int i = 1; i + 1 < n; i++) {
            long long old = abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]);
            long long now = abs(a[i + 1] - a[i - 1]);
            best = max(best, old - now);
        }
        cout << total - best << '\n';
    }
    return 0;
}
