#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
int n, k, m = 1, ans, sum;
int a[N], h[N];
map<int, int> ma;
map<int, bool> st;
signed main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
    {
		cin >> a[i];
		sum += abs(a[i]);
		h[i] = h[i - 1] + a[i];
	}
	while (sum >= abs(m))
    {
		if (st[m])
            break;
		st[m] = true;
		ma.clear();
		for (int i = 0; i <= n; i++)
        {
			ans += ma[h[i] - m];
			ma[h[i]]++;
		}
		m *= k;
	}
	cout << ans;
	return 0;
}