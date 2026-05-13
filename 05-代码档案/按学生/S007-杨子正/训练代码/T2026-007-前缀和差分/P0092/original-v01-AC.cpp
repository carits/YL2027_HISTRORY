# include <bits/stdc++.h>
using namespace std;
int n, k, a[int(4e5 + 5)], ans;
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++) 
		cin >> a[i], a[i] += a[i - 1];
	ans = 1;
	for (int i = 2; i <= n - k + 1; i++) 
		if (a[i + k - 1] - a[i - 1] < a[ans + k - 1] - a[ans - 1]) 
			ans = i;
	cout << ans << "\n";
	return 0;
}