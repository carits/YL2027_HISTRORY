#include <bits/stdc++.h>

using namespace std;

const int kN = 1e4 + 5;

int ans;
int sum[kN];
bool prime[kN];

int main()
{
	int n, k;
	cin >> n >> k;
	
	for(int i = 2; i <= n; i ++)
	{
		if(prime[i] == 0)
		{
			sum[++ans] = i;
			for(int j = i * 2; j <= n; j += i)
			{
				prime[j] = 1;
			}
		}
	}
	
	int cnt = 0;
	for(int i = 3; i <= ans && cnt < k; i ++)
	{
		for(int j = 1; j < i - 1; j ++)
		{
			if(sum[j] + sum[j + 1] + 1 == sum[i])
			{
				cnt ++;
				break;
			}
		}
	}
	if(cnt == k)
	{
		cout << "YES";
	}
	else cout <<"NO";
	return 0;
}