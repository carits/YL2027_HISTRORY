#include <bits/stdc++.h>
using namespace std;
long long q, k, n, a, b, ans;
void solve()
{
    cin >> k >> n >> a >> b;
    if (n * b >= k)
        cout << "-1\n"; 
    else
    {
        ans = min(n, (k - n * b - 1) / (a - b));
        cout << ans << "\n";
    }
}
int main()
{
    cin >> q;
    while (q--)
        solve();
    return 0;
}