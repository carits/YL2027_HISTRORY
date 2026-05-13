#include <bits/stdc++.h>
using namespace std;
const int N = 255;
bool vis[N];
void solve()
{
	int n, ans = 0;
	cin >> n;
	int res = 0;
	for (int a = 1; a <= n; a++)
		for (int b = 1; b <= n; b++)
        {
			int maxx = a * b, ans = 0;
			if (maxx < n)
                continue;
			if (a * b * n <= res)
                continue;
			memset(vis, 0, sizeof(int) * (n + 10));
			vis[b] = true;
			for (int i = n; i >= 1; i--)
            {
				if (i == a)
                    continue;
				int maxp = min(n, maxx / i);
				while (maxp >= 1 && vis[maxp])
                    maxp--;
				if (maxp == 0)
                {
					ans = -0x3f3f3f3f;
					break;
				}
				vis[maxp] = true;
				ans += maxp * i;
			}
			res = max(res, ans);
		}
	cout << res << "\n";
}
int main()
{
	int T;
	cin >> T;
	while (T--)
        solve();
	return 0; 
} 
