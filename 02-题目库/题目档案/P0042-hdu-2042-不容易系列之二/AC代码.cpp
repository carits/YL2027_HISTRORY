#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long long> dp(35);
    dp[0] = 3;
    for (int i = 1; i <= 30; i++) dp[i] = (dp[i - 1] - 1) * 2;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}
