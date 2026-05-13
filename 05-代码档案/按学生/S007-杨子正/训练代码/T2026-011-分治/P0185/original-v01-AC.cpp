#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 1, bb = b, aa = a;
    while (bb)
    {
        if (bb % 2 != 0)
            ans = (ans * aa) % c;
        aa = (aa * aa) % c;
        bb /= 2;
    }
    cout << a << "^" << b << " mod " << c << "=" << ans;
    return 0;
}