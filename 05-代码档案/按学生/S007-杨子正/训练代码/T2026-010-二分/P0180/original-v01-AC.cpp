#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, p, l, t;
bool check(int mid)
{
    int cl = (n - mid), x = ceil(n * 1.0 / 7);
    int p1 = cl * l, p2 = min(cl * 2, x) * t;
    return p1 + p2 >= p;
}
int lower()
{
    int l = 0, r = n, mid, ans;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        } else
            r = mid - 1;
    }
    return ans;
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> p >> l >> t;
        cout << lower() << '\n';
    }
    return 0;
}