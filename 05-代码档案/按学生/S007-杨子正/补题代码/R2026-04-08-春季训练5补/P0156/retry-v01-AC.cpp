#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int a, b;
    cin >> a >> b;
    int nu = 2 * a - b;
    if (nu < 0 || nu % 2 != 0)
    {
        cout << "Impossible!";
        return 0;
    }
    int y = nu / 2;
    int num = a - 4 * y;
    if (num < 0 || num % 2 != 0)
    {
        cout << "Impossible!";
        return 0;
    }
    int x = num / 2;
    cout << x << " " << y;

    return 0;
}