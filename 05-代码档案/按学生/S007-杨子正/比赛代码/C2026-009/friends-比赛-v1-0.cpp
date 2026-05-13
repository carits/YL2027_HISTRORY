#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
int n;
int a[N], sum[N];
int dfs(int k, int day)
{
	int ans = 0;
	if (day == 1)
		return sum[n] - sum[k - 1];
	for (int i = 1; i <= n; i++)
		ans = max(ans, __gcd(sum[i] - sum[k - 1], dfs(i, day - 1)));
	return ans;
}
signed main()
{
	freopen("friends.in", "r", stdin);
	freopen("friends.out", "w", stdout);
	cin >> n;
	bool t = true;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i], sum[i] = a[i] + sum[i - 1];
		if (a[i] != a[i - 1] && i != 1)
			t = false;
	}
	if (t)
	{
		int z = sum[n];
		for (int i = 1; i <= n; i++)
			cout << sum[n] / i << " ";
	}
	else
		for (int i = 1; i <= n; i++)
			cout << dfs(1, i) << " ";
	return 0;
}

