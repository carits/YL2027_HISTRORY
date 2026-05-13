#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200005], sum[200005];
signed main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    while (m--)
    {
        int b;
        cin >> b;
        int pos = lower_bound(sum + 1, sum + 1 + n, b) - sum;
        int k = b - sum[pos - 1];
        cout << pos << " " << k << "\n";
    }
    return 0;
}