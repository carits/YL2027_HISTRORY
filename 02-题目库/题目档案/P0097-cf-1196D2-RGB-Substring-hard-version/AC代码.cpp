#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    string base = "RGB";
    while (T--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int ans = k;
        for (int shift = 0; shift < 3; shift++) {
            vector<int> pre(n + 1);
            for (int i = 1; i <= n; i++) {
                char need = base[(i - 1 + shift) % 3];
                pre[i] = pre[i - 1] + (s[i - 1] != need);
            }
            for (int i = k; i <= n; i++) {
                ans = min(ans, pre[i] - pre[i - k]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
