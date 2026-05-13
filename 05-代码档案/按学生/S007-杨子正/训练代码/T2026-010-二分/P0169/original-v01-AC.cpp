#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + m);
    long long ans = 0;  
    for (int i = 1; i <= n; i++)
    {
        int b;
        cin >> b;
        int l = 1, r = m, pos = m;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] >= b)
            {
                pos = mid;
                r = mid - 1;
            } else 
                l = mid + 1;
        }
        int minn = INT_MAX;
        if (pos <= m) 
            minn = min(minn, abs(a[pos] - b));
        if (pos > 1) 
            minn = min(minn, abs(a[pos - 1] - b));
        ans += minn;
    }
    cout << ans;
    return 0;
}