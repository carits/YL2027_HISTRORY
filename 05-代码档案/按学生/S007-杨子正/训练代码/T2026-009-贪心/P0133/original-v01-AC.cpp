#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n, k;
	cin >> n >> k;
	bool t = false;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a == k)
			t = true;
	}
	cout << (t ? "YES\n" : "NO\n");
}
int main() 
{
	int T;
	cin >> T;
	while (T--)
		solve();
	return 0;
}