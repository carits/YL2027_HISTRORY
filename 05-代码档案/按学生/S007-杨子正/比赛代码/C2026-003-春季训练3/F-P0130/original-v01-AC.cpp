#include <bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a, int b) 
{
	if (b == 0) 
        return a;
	return gcd(b, a % b);
}
void solve()
{
    int x, y;
    cin >> x >> y;
    for (int z = x + 1; z < y; z++)
        if (gcd(z, y) == 1 && gcd(z, x) == 1)
        {
            cout << z << "\n";
            return ;
        }
    cout << "-1\n";
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}