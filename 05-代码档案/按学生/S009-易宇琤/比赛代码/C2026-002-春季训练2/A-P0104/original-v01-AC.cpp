#include <bits/stdc++.h>

using namespace std;


void work()
{
	int n, ans = 0;
	cin >> n;
	
	while(n --)
	{
		int a, b;
		cin >> a >> b;
		
		if(a > b)
		{
			ans ++;
		}
	}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	
	while(t --)
	{
		work();
	}
	return 0;
}