#include<bits/stdc++.h>

using namespace std;

int t, n, k, a[200005];
string s;

void solve()
{
	cin >> n >> k >> s;
	
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == 'B')
		{
			a[++cnt] = i;
		}
	} 
	
	a[0] = -1e9;
	int ans = 0, sum = 0;
	for(int i = 1; i <= cnt; i++)
	{
		if(a[i] - a[i - 1] + 1 <= sum)
		{
			sum -= (a[i] - a[i - 1] + 1);
		}
		else
		{
			ans++;
			sum = k;
		}
	}
	
	cout << ans << "\n";
}

int main()
{
	cin >> t;
	
	while(t--)
	{
		solve();
	}
	return 0;
}