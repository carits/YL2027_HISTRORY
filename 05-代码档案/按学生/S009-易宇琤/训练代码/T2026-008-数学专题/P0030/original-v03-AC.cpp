#include <bits/stdc++.h>
#define int long long

using namespace std;

const int kN = 2e5 + 5;

int a[kN], id[kN];

void work()
{
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		id[a[i]] = i;
	}
	
	sort(a + 1, a + 1 + n);
	
	int ans = 0;
	for(int i = 1; i <= n; i ++)
	{
		for(int j = i + 1; j <= n; j ++)
		{
			if(a[i] * a[j] > 2 * n)
			{
				break;
			}
			if(a[i] * a[j] == id[a[i]] + id[a[j]])
			{
				ans ++;
			}
		}
	}
	cout << ans << "\n";
}

signed main()
{
	int t;
	cin >> t;
	
	while(t --)
	{
		work();
	}
	return 0;
}