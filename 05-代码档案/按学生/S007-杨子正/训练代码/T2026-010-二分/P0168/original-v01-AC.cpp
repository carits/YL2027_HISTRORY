#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int h[N], w[N], n, m;
bool check(int mid)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += (h[i] / mid) * (w[i] / mid);
	return sum >= m;
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> h[i] >> w[i];
	int l = 0, r = 1e9, ans = 0;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid))
			l = mid + 1, ans = max(mid, ans);
		else r = mid - 1; 
	}
	cout << ans;
	return 0;
} 
