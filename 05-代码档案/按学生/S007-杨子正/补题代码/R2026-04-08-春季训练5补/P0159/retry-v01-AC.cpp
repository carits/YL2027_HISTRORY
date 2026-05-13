#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, p[500005], v[500005], a[50005], maxx[500005], minn[500005];
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> p[i] >> v[i];
        a[p[i]] += v[i];
        maxx[i] = max(maxx[i - 1], a[p[i]]);
    }
    minn[m] = 1e18;
    for (int i = 1; i <= n; i++)
        minn[m] = min(minn[m], a[i]);
    for (int i = m - 1; i >= 1; i--)
    {
        a[p[i + 1]] -= v[i + 1];
        minn[i] = min(minn[i + 1], a[p[i + 1]]);
    }
    for (int i = 1; i <= m; i++)
        cout << maxx[i] - minn[i] << " ";
	return 0;
}