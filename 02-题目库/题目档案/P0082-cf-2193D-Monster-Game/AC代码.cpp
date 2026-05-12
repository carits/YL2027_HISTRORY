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
        vector<long long> a(n), b(n), pre(n + 1);
        for (auto &x : a) cin >> x;
        for (int i = 0; i < n; i++) cin >> b[i], pre[i + 1] = pre[i] + b[i];
        sort(a.begin(), a.end(), greater<long long>());
        long long ans = 0;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;
            long long cnt = j;
            int levels = upper_bound(pre.begin(), pre.end(), cnt) - pre.begin() - 1;
            ans = max(ans, a[i] * 1LL * levels);
            i = j;
        }
        cout << ans << '\n';
    }
    return 0;
}
