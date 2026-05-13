#include <bits/stdc++.h>

using namespace std;

const int kN = 3e3 + 5;

int prime[kN];

int main()
{
	int n;
	cin >> n;
	
	for(int i = 2; i <= n; i ++)
	{
		if(prime[i] == 0)
		{
			for(int j = 2; j * i <= n; j ++)
			{
				prime[j * i] ++;
			}
		}
	}
	
	int ans = 0;
	for(int i = 2; i <= n; i ++)
	{
		if(prime[i] == 2)
		{
			ans ++;
		}
	}
	cout << ans;
	return 0;
}