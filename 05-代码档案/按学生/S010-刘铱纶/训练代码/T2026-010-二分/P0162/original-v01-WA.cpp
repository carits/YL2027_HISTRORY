#include<bits/stdc++.h>

#define int long long

using namespace std;

int t;

signed main()
{
	cin >> t;
	
	while(t--)
	{
		int x;
		cin >> x;
		
		bool v = 0;
		
		for(int i = 1; i <= x / 2; i++)
		{
			int o = x - i * i * i;
			if(o < 0)
			{
				break;
			}
			
			int u = cbrt(o);
			if(u * u * u == o)
			{
				v = 1;
				break;
			}
		}
		
		if(v == 1)
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
	return 0;
}