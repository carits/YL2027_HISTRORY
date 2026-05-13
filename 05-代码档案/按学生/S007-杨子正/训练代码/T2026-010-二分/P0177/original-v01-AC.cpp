#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long l = 1, r = 2000000000LL, ans = r;
    while (l <= r)
    {
        long long m = (l + r) / 2;
        if (m * log10((double)m) >= n - 1)
        {
            ans = m;
            r = m - 1;
        } else
            l = m + 1;
    }
    cout << ans;
    return 0;
}