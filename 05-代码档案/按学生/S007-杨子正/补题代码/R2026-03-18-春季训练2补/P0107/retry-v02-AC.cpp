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
        double ans = (double)d * h / 2.0;
        for (int i = 0; i + 1 < n; i++) 
        {
            if (a[i + 1] >= a[i] + h) ans += (double)d * h / 2.0;
            else
            {
                double dd = (double)d * (a[i] + h - a[i + 1]) / h;
                double hh = a[i + 1] - a[i];
                ans += (d + dd) / 2.0 * hh;
            }
        }
        printf("%.9lf\n", ans);
    }
    return 0;
}