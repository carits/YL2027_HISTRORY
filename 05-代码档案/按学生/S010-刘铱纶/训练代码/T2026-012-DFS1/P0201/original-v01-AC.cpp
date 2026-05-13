#include<bits/stdc++.h>

using namespace std;

int n, ans, a[25][3];
bool v[25]; 

void dfs(int x)
{
	if(x == n + 1)
	{
		ans++;
		return; 
	}
	
	for(int i = 0; i <= 1; i++)
	{
		if(v[a[x][i]] == 0)
		{
			v[a[x][i]] = 1;
			dfs(x + 1);
			v[a[x][i]] = 0;
		}
	}
	
	return ;
}

int main()
{
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i][0] >> a[i][1];
	}
	
	dfs(1);
	
	cout << ans;	
	return 0;
}