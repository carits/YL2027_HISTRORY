#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
signed main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i=sqrt (n);i>=1;i--)
	{
		if (n%i==0)
		{
			cout << i+n/i;
			return 0;
		}
	}
	return 0;
}