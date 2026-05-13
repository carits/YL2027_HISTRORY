#include <bits/stdc++.h>

#define int long long

using namespace std;

int t, n;

signed main()
{
	cin >> t;
	
	while (t--)
	{
		cin >> n;
		
		bool v = 0;
		
		for(int i = 1; i * i * i <= n; i++)
		{
			int j = n - i * i * i, o = cbrt(j);
			
			if(o * o * o != j || j == 0)
			{
				continue;
			}
			
			if(i * i * i + j == n)
			{
				cout << "YES\n";
				v = 1;
				break;
			}
		}
		
		if(v == 0) 
		{
			cout << "NO\n";
		} 
	}
	
	return 0;
}