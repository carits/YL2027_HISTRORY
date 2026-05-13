#include<bits/stdc++.h>

using namespace std;

int t, n, k;

int main()
{
	cin >> t;
	
	while(t--)
	{
		cin >> n >> k;
		
		bool v = 0;
		int a;
		for(int i = 1; i <= n; i++)
		{
			cin >> a;
			if(a == k)
			{
				v = 1;
			}
		}
		
		if(v == 0)
		{
			cout << "NO" << "\n";
		}
		else
		{
			cout << "YES" << "\n";
		}
	}
	return 0;
}