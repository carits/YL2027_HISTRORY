#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 10;
int n, s, cost;
int a[N], b[N];
int work(int k)
{
    for (int i = 1; i <= n; i++)
        b[i] = a[i] + i * k;
    sort(b + 1, b + n + 1);
    int tot = 0;
    for (int i = 1; i <= k; i++)
        tot += b[i];
    return (tot <= s ? tot : -1);
}
signed main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    int l = 0, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int t = work(mid);
        if (t != -1) l = mid + 1, cost = t;
        else r = mid - 1;
    }
    if (!work(1))
        cout << "0 0";
    else
        cout << l - 1 << ' ' << cost;
    return 0;
}
