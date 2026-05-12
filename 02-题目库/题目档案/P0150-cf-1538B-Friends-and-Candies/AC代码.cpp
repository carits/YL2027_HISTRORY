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
        long long s = 0;
        for (int &x : a) cin >> x, s += x;
        if (s % n) {
            cout << -1 << '\n';
            continue;
        }
        long long avg = s / n;
        int ans = 0;
        for (int x : a) if (x > avg) ans++;
        cout << ans << '\n';
    }
    return 0;
}
