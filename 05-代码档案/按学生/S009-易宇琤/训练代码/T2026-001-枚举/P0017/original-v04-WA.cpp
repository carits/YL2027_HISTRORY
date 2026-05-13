#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a, b, c;
int ans = INT_MAX;
signed main()
{
    cin >> n >> a >> b >> c;
    if(n == 0)
    {
        cout << 0;
        return 0;
    }
    for(int i = 0; i <= n / a; i ++)
        for(int j = 0; j <= n / b; j ++)
        {
            int k = (n - a * i - j * b) / c;
            if(i * a + j * b + k * c == n)
                ans = min(ans, i + j + k);
        }
    cout << ans;
    return 0;
}