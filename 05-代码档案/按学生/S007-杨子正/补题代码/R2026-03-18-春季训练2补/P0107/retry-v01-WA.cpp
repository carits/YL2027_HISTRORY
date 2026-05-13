#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, d, h;
        cin >> n >> d >> h;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long double ans = (long double)d * h / 2.0;
        for (int i = 0; i + 1 < n; i++) 
        {
            if (a[i + 1] >= a[i] + h) ans += (long double)d * h / 2.0;
            else
            {
                long double d2 = (long double)d * (a[i] + h - a[i + 1]) / h;
                long double nh = a[i + 1] - a[i];
                ans += (d + d2) / 2.0 * nh;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}