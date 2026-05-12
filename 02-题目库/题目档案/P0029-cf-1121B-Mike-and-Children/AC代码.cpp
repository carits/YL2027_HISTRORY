#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int ans = 0;
    for (int s = 2; s <= 200; s++) {
        vector<int> used(n, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (used[i]) continue;
            for (int j = i + 1; j < n; j++) {
                if (!used[j] && a[i] + a[j] == s) {
                    used[i] = used[j] = 1;
                    cnt++;
                    break;
                }
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
    return 0;
}
