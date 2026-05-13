#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n, x, y;
    cin >> n >> x >> y;
    int d = y - x;
    int best = INT_MAX;
    int s = 0, bd = 0;
    for (int k = 1; k <= n - 1; k++) 
    {
        if (d % k != 0) continue;
        int cd = d / k;
        int l = (x - 1) / cd;
        int tl = min(l, n - k - 1);
        int cs = x - tl * cd;
        int cm = cs + (n - 1) * cd;
        if (cm < best) 
        {
            best = cm;
            s = cs;
            bd = cd;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        cout << s + i * bd;
        if (i < n - 1) cout << " ";
    }
    cout << "\n";
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}