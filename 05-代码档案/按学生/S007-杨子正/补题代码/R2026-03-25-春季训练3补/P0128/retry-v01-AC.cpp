#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
int a[N], n;
int poww(int a,int b) 
{
	int ans = 1;
	while (b) 
    {
		if (b & 1) 
			ans *= a;
		a *= a;
		b >>= 1;
	}
	return ans;
}
signed main() 
{
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	if (n >= 3) 
    {
		int ans = 1e18;
		for (int i = 1; poww(i, n - 1) <= 1e12; i++) 
        {
			int mul = 1;
			int cur = 0;
			for (int j = 1; j <= n; j++) 
            {
				if (mul > 1e12) 
                {
					cur = 1e18;
					break;
				}
				cur += mul > a[j] ? mul - a[j] : a[j] - mul;
				mul = mul * i;
			}
			ans = min(ans, cur);
		}
		cout << ans << "\n";
	} else 
		cout << a[1] - 1 << "\n";
	return 0;
}