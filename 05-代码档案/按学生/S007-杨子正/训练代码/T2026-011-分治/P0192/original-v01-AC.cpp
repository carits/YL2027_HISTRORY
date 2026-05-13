#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int x = __lg(n - 1) + 1;
    cout << x << "\n";
    for (int t = 0; t < x; t++)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
            if (!(i >> t & 1))
                ans++;
        cout << ans << " ";
        for (int i = 0; i < n; i++)
            if (!(i >> t & 1))
                cout << i + 1 << " ";
        cout << "\n";
    }
    return 0;
}