#include <bits/stdc++.h>
#define int long long

using namespace std;

const int kN = 2e5 + 5;

int sum[kN];

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 1; i <= 2e5; i ++)
	{
		int s = 0, x = i;
		while(x > 0)
		{
			s += x % 10;
			x /= 10;
		}
		
		sum[i] = sum[i - 1] + s;
	}
	
	int t;
	cin >> t;
	while(t --)
	{
		int n;
		cin >> n;
		cout << sum[n] << "\n";
	}
	return 0;
}