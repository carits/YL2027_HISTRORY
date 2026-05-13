#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[50005];
void solve()
{
    int n;
    cin >> n;
    int min1 = 1e9, min2 = 1e9, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        for (int i = 1; i <= m; i++)
            cin >> a[i];
        sort(a + 1, a + 1 + m);
        min1 = min(min1, a[1]);
        min2 = min(min2, a[2]);
        sum += a[2];
    }
    cout << sum - min2 + min1 << "\n";
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}