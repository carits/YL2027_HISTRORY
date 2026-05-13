#include<bits/stdc++.h>

using namespace std;

int t, n, a[200005];

int main()
{
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		
		int ans = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = i + 1; j <= n; j++)
			{
				if(a[i] * a[j] == i + j)
				{
					ans++;
				}
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}