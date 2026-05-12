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
        set<int> seen;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (seen.count(a[i])) {
                ans = i + 1;
                break;
            }
            seen.insert(a[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}
