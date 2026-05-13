#include <bits/stdc++.h>

using namespace std;

const int kN = 5e6 + 5;

int a[kN], diff[kN], sum[kN];

int main()
{
	int n, p;
	cin >> n >> p;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		diff[i] = a[i] - a[i - 1];
	}
	
	while(p --)
	{
		int x, y, z;
		cin >> x >> y >> z;
		diff[x] += z;
		diff[y + 1] -= z;
	}
	
	int ans = INT_MAX;
	for(int i = 1; i <= n; i ++)
	{
		sum[i] = sum[i - 1] + diff[i];
		ans = min(sum[i], ans);
	}
	cout << ans;
	return 0;
} 