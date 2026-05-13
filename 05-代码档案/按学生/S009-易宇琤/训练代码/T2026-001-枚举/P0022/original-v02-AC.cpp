#include <bits/stdc++.h>
#define int long long
using namespace std;

int k, n, w;
signed main()
{
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i ++)
        n -= (i * k);
    if(n < 0)
        cout << abs(n);
    else cout << 0;
    return 0;
}