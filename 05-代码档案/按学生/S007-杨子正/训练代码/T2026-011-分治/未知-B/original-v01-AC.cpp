#include <bits/stdc++.h>
#define int long long
using namespace std;
int qpow(int a, int b, int m)
{
    int res = 1;
    while (b)
    {
        if (b & 1) res = res * a % m;
        a = a * a % m, b >>= 1;
    }
    return res;
}
signed main()
{
    int a, x, m;
    cin >> a >> x >> m;
    x--;
    int b = sqrt(x) + 1, res = 0, ans = 0;
    for (int i = 1; i <= b; i++)
    {
        res += qpow(a, i, m);
        res %= m;
    }
    for (int i = 1, j = 1; i <= x / b; i++)
    {
        ans = (ans + res * j % m) % m;
        j = j * qpow(a, b, m) % m;
    }
    for (int i = x / b * b + 1; i <= x; i++)
        ans = (ans + qpow(a, i, m)) % m;
    cout << (ans + 1) % m;
    return 0;
}