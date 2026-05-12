#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == k) ok = true;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
