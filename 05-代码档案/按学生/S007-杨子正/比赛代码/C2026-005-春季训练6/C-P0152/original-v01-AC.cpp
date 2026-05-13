#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<char> a(n + 5), b(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        if (a[i] > b[i])
            swap(a[i], b[i]);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == '0' && b[i] == '1')
            ans += 2;
        else if (a[i] == '0' && b[i] == '0')
        {
            if (i != n && a[i + 1] == '1' && b[i + 1] == '1')
            {
                ans += 2;
                i++;
            }
            else
                ans++;
        } else if (a[i] == '1' && b[i] == '1')
        {
            if (i != n && a[i + 1] == '0' && b[i + 1] == '0')
            {
                ans += 2;
                i++;
            }
        }
    }
    cout << ans << "\n";
}
int main()
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