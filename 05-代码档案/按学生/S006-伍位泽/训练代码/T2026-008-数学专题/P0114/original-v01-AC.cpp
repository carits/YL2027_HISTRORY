#include <bits/stdc++.h>
using namespace std;

int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t , n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int x=2;
		long long sum=1;
		while (1)
		{
			sum+=x;
			x*=2;
			if (n%sum==0)
			{
				cout << n/sum << "\n";
				break;
			}
		}
	}
	return 0;
}