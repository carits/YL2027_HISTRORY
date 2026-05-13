#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N], dp[N];
int main() 
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dp[1] = a[1];
    for (int i = 2; i <= n; i++)
        dp[i] = max(dp[i - 1] + a[i], a[i]);
    int ans = INT_MIN;
    for (int i = 1; i <= n; i++)
        ans = max(dp[i], ans);
    cout << ans;
    return 0;
}