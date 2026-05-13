#include <bits/stdc++.h>
using namespace std;
long long n, q, sum[200005], a[200005], l, r, suf[200005];
int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 2; i <= n; i++)
    {
        sum[i] = sum[i - 1];
        if (a[i - 1] - a[i] > 0) sum[i] += abs(a[i - 1] - a[i]);
    }
    for (int i = n - 1; i >= 1; i--)
    {
    	suf[i] = suf[i + 1];
    	if (a[i + 1] - a[i] > 0) suf[i] += a[i + 1] - a[i];
    }
    while (q--)
    {
        cin >> l >> r;
        if (r > l) cout << sum[r] - sum[l] << "\n";
        else cout << suf[r] - suf[l] << "\n";
    }
    return 0;
}