#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 5);
    int sum = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i], sum += a[i];
    if (sum % n != 0)
    {
        cout << "-1\n";
        return ;
    }
    sum /= n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (sum < a[i])
            ans++;
    cout << ans << "\n"; // 
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}