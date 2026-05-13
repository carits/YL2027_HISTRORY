#include <bits/stdc++.h>
#define int long long

using namespace std;

int Pow(int x, int y)
{
	int res = 1; 
	while(y > 0)
	{
		if(y % 2 == 1)
		{
			res *= x;
		}
		
		x *= x;
		y >>= 1;
	}
	return res;
}

void work()
{
	int n;
	cin >> n;
	
	for(int i = 2; ; i ++)
	{
		int p = Pow(2, i) - 1;
		if(n % p == 0)
		{
			cout << n / p << "\n";
			break;
		}
	}
}

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	
	while(t --)
	{
		work();
	}
	return 0;
}