#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 5);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 10 == 5)
                a[i] += 5;
            else if (a[i] % 10 == 0)
                continue;
            else
            {
                while (a[i] % 10 != 2)
                    a[i] += a[i] % 10;
                a[i] %= 20;
            }
        }
        bool flag = true;
        for (int i = 2; i <= n; i++)
            if (a[i] != a[1])
            {
                flag = false;
                break;
            }
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}