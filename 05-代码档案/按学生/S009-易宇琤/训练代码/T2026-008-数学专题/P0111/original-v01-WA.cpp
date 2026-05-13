#include <bits/stdc++.h>

using namespace std;

const int kN = 1e5 + 5;

bool prime[kN];

int main()
{
	for(int i = 2; i <= 1e5; i ++)
	{
		if(prime[i] == 0)
		{
			for(int j = i * 2; j <= 1e5; j += i)
			{
				prime[j] = 1;
			}
		}
	}
	
	int n, cnt = 0;
	cin >> n;
	
	for(int i = 2; i <= 1e5; i ++)
	{
		if(prime[i] == 0)
		{
			cnt ++;
			cout << i << " ";
			if(cnt == n)
			{
				break;
			}
		}
	}
	return 0;
}