#include<bits/stdc++.h>

using namespace std;

int t, n, a[200005], p[200005];
map<int, int> vis;

void solve()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		p[i] = 0;
		vis[a[i]] = 0;
	}
	p[n + 1] = 0;
	
	for(int i = n; i >= 1; i--)
	{
		p[i] = p[i + 1];
		if(vis[a[i]] == 1)
		{
			p[i]++;
		}
		vis[a[i]] = 1;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(p[i] == 0)
		{
			cout << i - 1 << "\n";
			break;
		}
	}
	return ;
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