#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'B')
        {
            i += (k - 1);
            ans++;
        }
    cout << ans << "\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}