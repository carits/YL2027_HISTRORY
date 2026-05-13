#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        if (p % q != 0)
        {
            cout << p << "\n";
            continue;
        }
        int ans = 1;
        int x = q;
        for (int i = 2; i * i <= x; i++)
            if (x % i == 0)
            {
                int cnt = 0;
                while (x % i == 0)
                {
                    x /= i;
                    cnt++;
                }
                int tmp = p;
                while (tmp % i == 0)
                    tmp /= i;
                int cur = 1;
                for (int j = 1; j < cnt; j++)
                    cur *= i;
                cur *= tmp;
                ans = max(ans, cur);
            }
        if (x > 1)
        {
            int tmp = p;
            while (tmp % x == 0)
                tmp /= x;
            ans = max(ans, tmp);
        }
        cout << ans << "\n";
    }
    return 0;
}