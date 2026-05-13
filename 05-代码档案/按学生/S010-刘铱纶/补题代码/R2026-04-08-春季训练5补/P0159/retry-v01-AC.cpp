#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, m, p[500005], v[500005], a[50005], b[500005], c[500005];

signed main()
{
	cin >> n >> m;
	
	for(int i = 1; i <= m; i++)
	{
		cin >> p[i] >> v[i];
		a[p[i]] += v[i];
		b[i] = max(b[i - 1], a[p[i]]);
	}
	
	c[m] = b[m];
	for(int i = 1; i <= n; i++)
	{
		c[m] = min(c[m], a[i]);
	}
	
	for(int i = m; i > 1; i--)
	{
		a[p[i]] -= v[i];
		c[i - 1] = min(c[i], a[p[i]]);
	}
	
	for(int i = 1; i <= m; i++)
	{
		cout << b[i] - c[i] << " ";
	}
	return 0;
}