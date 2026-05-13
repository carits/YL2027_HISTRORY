#include <bits/stdc++.h>
#define int long long
using namespace std;

int k, n, w;
signed main()
{
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i ++)
        n -= (i * k);
    cout << abs(n);
    return 0;
}