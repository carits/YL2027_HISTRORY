#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
	cin >> n;
	int ans = 0;
	while (n--)
    {
		int a, b;
		cin >> a >> b;
		if (a > b)
			ans++;
	}
	cout << ans << "\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}