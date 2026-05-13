#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("leg.in", "r", stdin);
	freopen("leg.out", "w", stdout);
	int n, m, a, b, c, d;
	cin >> n >> m >> a >> b >> c >> d;
	if (n == 0 || m == 0)
	{
		int o = (n + m + 1) / 2, j;
		if ((n + m) % 2 == 0)
			j = o;
		else j = o - 1;
		if (m == 0)
			cout << o * a + j * c;
		else
			cout << o * b + j * d;
	} else
	{
		int ans = 0;
		int o = (n + 1) / 2, j;
		if (n % 2 == 0)
			j = o;
		else j = o - 1;
		ans += o * a + j * c;
		o = (m + 1) / 2;
		if (m % 2 == 0)
			j = o;
		else j = o - 1;
		ans += o * b + j * d;
		cout << ans;
	}
	return 0;
}

