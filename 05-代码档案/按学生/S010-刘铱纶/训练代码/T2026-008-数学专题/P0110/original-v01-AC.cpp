#include<bits/stdc++.h>

using namespace std; 

int t, n, a[100005];

int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	
	return gcd(b, a % b);
}

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
		int l = 1, r = n;
		while(l <= r)
		{
			ans = gcd(ans, abs(a[l] - a[r]));
			l++, r--;
		}
		
		cout << ans << "\n";
	}
	return 0;
}