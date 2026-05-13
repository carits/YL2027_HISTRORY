#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int ans = 1, now = 1;
    for (int i = 1; i <= n; i++)
        if (a[i] < 0)
        {
            if (now < abs(a[i]))
            {
                int need = -a[i] + 1 - now;
                ans += need;
                now += need;
            }
            now += a[i];
        }
        else
            now += a[i];
    cout << ans;
    return 0;
}