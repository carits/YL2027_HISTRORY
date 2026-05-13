#include <bits/stdc++.h>
using namespace std;
int a[205];
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n * 2; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n * 2);
    int ans = 0;
    for (int i = 1; i < n; i++)
        ans += a[i + 1] - a[i];
    for (int i = n + 1; i < 2 * n; i++)
        ans += a[i + 1] - a[i];
    cout << ans << "\n";
    for (int i = 1; i <= n; i++)
        cout << a[i] << " " << a[i + n] << "\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}