#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int a[N], n, m;
bool check(int x)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)
            s += a[i] - x;
        if (s >= m)
            return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    int l = 0, r = 1e9;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << r << "\n";
    return 0;
}