#include <bits/stdc++.h>
using namespace std;
int a[100005], b[100005];
long long n, k, l, r, ans;
bool check(long long mid)
{
    long long sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (b[i] < a[i] * mid) sum += a[i] * mid - b[i];
        if (sum > k) return false;
    }
    if (sum <= k) return true;
    return false;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    l = 0, r = 2e9;
    while (l <= r)
    {
        long long mid = (l + r) >> 1;
        if (check(mid))
            l = mid + 1, ans = mid;
        else r = mid - 1;
    }
    cout << ans;
}
