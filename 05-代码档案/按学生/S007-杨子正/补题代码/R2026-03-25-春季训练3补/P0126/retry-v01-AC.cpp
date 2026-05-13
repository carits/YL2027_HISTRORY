#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int x;
    cin >> x;
    if (x % 10 == 9)
    {
        cout << "NO\n";
        return ;
    }
    x /= 10;
    while (x > 10)
    {
        if (x % 10 == 0)
        {
            cout << "NO\n";
            return ;
        }
        x /= 10;
    }
    if (x != 1)
        cout << "NO\n";
    else
        cout << "YES\n";
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}