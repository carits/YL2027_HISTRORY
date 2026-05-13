#include<bits/stdc++.h>

using namespace std;

int n, k;

int main()
{
	cin >> n >> k;
	
	int t = 4 * 60 - k;
	
	int ans = 0;
	
	for(int i = 1; i <= n; i++)
	{
		if(t >= i * 5)
		{
			t -= i * 5;
			ans++;
		}
	}
	
	cout << ans;
	return 0;
}