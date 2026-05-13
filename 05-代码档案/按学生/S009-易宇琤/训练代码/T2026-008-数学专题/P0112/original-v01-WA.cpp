#include <bits/stdc++.h>

using namespace std;

const int kN = 1e4 + 5;

bool prime[kN];

int main()
{
	for(int i = 2; i <= 1e4; i ++)
	{
		if(prime[i] == 0)
		{
			for(int j = i * 2; j <= 1e4; j ++)
			{
				prime[j] = 1;
			}
		}
	}
	
	int n, k;
	cin >> n >> k;
	
	int cnt = 0;
	for(int i = 2; i <= n; i ++)
	{
		if(prime[i] == 0)
		{
			cnt ++;
		}
	}
	if(cnt >= k)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}