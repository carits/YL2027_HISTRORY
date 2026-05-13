#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 5;
int a[N], tmp[N], ans;
void f(int l, int r)
{
    int m = (l + r) >> 1;
    if (l == r)
        return ;
    f(l, m), f(m + 1, r);
    for (int i = l, j = m + 1, k = l; k <= r; k++)
        if (i <= m && (j > r || a[i] <= a[j]))
            tmp[k] = a[i++], ans += (j - m - 1);
        else
            tmp[k] = a[j++];
    for (int i = l; i <= r; i++)
        a[i] = tmp[i];
}
signed main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f(1, n);
    cout << ans;
    return 0;
} 