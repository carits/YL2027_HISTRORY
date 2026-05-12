#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
        int ans = 0;
        for (int i = 0; i < n; ) {
            if (a[i] != b[i]) {
                ans += 2;
                i++;
            } else if (a[i] == '0') {
                if (i + 1 < n && a[i + 1] == '1' && b[i + 1] == '1') {
                    ans += 2;
                    i += 2;
                } else {
                    ans += 1;
                    i++;
                }
            } else {
                if (i + 1 < n && a[i + 1] == '0' && b[i + 1] == '0') {
                    ans += 2;
                    i += 2;
                } else {
                    i++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
