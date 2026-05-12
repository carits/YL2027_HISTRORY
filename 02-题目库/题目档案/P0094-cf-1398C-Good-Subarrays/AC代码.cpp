#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        map<int, ll> cnt;
        cnt[0] = 1;
        int sum = 0;
        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            sum += s[i - 1] - '0';
            int key = sum - i;
            ans += cnt[key];
            cnt[key]++;
        }
        cout << ans << '\n';
    }
    return 0;
}
