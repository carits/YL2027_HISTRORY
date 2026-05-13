#include<bits/stdc++.h>

#define int long long

using namespace std;

int t, n, a[200005], id[200005];

signed main()
{
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			id[a[i]] = i;
		}
		
		sort(a + 1, a + 1 + n);
		
		int ans = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = i + 1; j <= n; j++)
			{
				if(a[i] * a[j] > 2 * n)
				{
					break;
				}
				
				if(a[i] * a[j] == id[a[i]] + id[a[j]])
				{
					ans++;
				}
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}