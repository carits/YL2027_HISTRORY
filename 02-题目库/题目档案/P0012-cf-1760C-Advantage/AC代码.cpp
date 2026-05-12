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
        vector<int> a(n), b;

        for (int i = 0; i < n; i++) cin >> a[i];
        b = a;
        sort(b.begin(), b.end());

        int mx = b[n - 1], se = b[n - 2];

        for (int i = 0; i < n; i++) {
            if (a[i] == mx) cout << a[i] - se;
            else cout << a[i] - mx;
            cout << " \n"[i == n - 1];
        }
    }

    return 0;
}
