#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, d, h;
    cin >> n >> d >> h;
    vector<int> y(n);
    for (auto & a : y)
        cin >> a;
    double ans = double(d * h / 2.0);
    for (int i = 0; i + 1 < n; i++) 
    {
        if (y[i + 1] >= y[i] + h) ans += double(d * h / 2.0);
        else
        {
            double d2 = double(d * (y[i] + h - y[i + 1]) / h);
            double nh = y[i + 1] - y[i];
            ans += (d + d2) / 2.0 * nh;
        }
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