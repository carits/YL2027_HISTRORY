#include <bits/stdc++.h>
using namespace std;
int n, k;
bool check(int v)
{
    int cnt = 0;
    int cur = v;
    while (cur > 0)
    {
        cnt += cur;
        cur /= k;
    }
    return cnt >= n;
}
int main()
{
    cin >> n >> k;
    int l = 1, r = n, ans = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }
    cout << ans;
    return 0;
} 