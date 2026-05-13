#include <bits/stdc++.h>
using namespace std;
int n, x, ans, a[200005];
int main()
{
	string s;
	cin >> n >> s;
	s = ' ' + s;
	for (int i = 1; i <= n; i++)
	{
		x = x + (s[i] == '0' ? - 1 : 1);
		if (x != 0 && a[x + n] == 0) a[x + n] = i;
		else ans = max(ans, i - a[x + n]);
	}
	cout << ans;
	return 0;
}