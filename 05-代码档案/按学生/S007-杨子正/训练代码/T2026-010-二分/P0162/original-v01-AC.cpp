#include <bits/stdc++.h>
#define int long long
using namespace std;
int T, n, x, y;
bool flag;
signed main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        flag = false;
        for (int i = 1; i * i * i <= n; i++)
        {
            x = n - i * i * i;
            y = pow(x, 1.0 / 3);
            if (y * y * y == x && y)
            {
                cout << "YES\n";
                flag = true;
                break;
            }
            y++;
            if (y * y * y == x)
            {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "NO\n";
    }
    return 0;
}