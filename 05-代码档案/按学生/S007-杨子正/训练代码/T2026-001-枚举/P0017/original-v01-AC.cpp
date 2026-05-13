#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 1e9;
    for (int i = 0; i * a <= n; i++)
        for (int j = 0; i * a + j * b <= n; j++)
        {
            if ((n - (i * a + j * b)) % c != 0)
                continue;
            int m = (n - (i * a + j * b)) / c;
            if (m < 0)
                continue;
            ans = min(ans, i + j + m);
        }
    cout << ans;
    return 0;
}