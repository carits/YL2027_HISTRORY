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
        bool ok = true;
        for (int i = 1; i < n; i++) if (a[i - 1] > a[i]) ok = false;
        cout << (ok ? n : 1) << '\n';
    }
    return 0;
}
