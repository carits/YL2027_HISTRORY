#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[10];
int t , n;
signed main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		bool p=0;
		for (int i=1;i<=n-1;i++)
		{
			if (a[i]>a[i+1])
			{
				p=1;
			}
		}
		if (p==0)
		{
			cout << n << "\n";
		}
		else
		{
			cout << 1 << "\n";
		}
	}
	return 0;
}