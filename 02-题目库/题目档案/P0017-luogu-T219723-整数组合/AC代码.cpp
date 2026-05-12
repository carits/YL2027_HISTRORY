#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    const int inf = 1e9;
    vector<int> dp(n + 1, inf);
    dp[0] = 0;
    for (int i = 0; i <= n; i++) {
        if (dp[i] == inf) continue;
        if (i + a <= n) dp[i + a] = min(dp[i + a], dp[i] + 1);
        if (i + b <= n) dp[i + b] = min(dp[i + b], dp[i] + 1);
        if (i + c <= n) dp[i + c] = min(dp[i + c], dp[i] + 1);
    }
    cout << (dp[n] == inf ? -1 : dp[n]) << '\n';
    return 0;
}
