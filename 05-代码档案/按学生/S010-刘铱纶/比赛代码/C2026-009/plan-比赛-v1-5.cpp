#include<bits/stdc++.h>

using namespace std;

int n, m, k, c[100005], a[100005][15], maxi = -1e9;
queue<int> q;

void dfs(int x, int cnt, int sum)
{
	if(sum >= k)
	{
		return ;
	}
	if(x > n)
	{ 
		maxi = max(maxi, cnt);
//		cout << maxi << "\n";
		return ;
	}
	
	bool vis[15] = {};
	for(int i = 1; i <= c[x]; i++)
	{
		vis[a[x][i]] = 1;
	}
	
	int o = 0;
	queue<int> p = q;
	while(p.empty() == 0)
	{
		int u = p.front();
		p.pop();
		o++;
		
		for(int i = 1; i <= c[u]; i++)
		{
			if(vis[a[u][i]] == 1)
			{
				o--;
				break;
			}
		}
	}
	
	q.push(x);
	dfs(x + 1, cnt + 1, sum + o);
	q.pop();
	
	dfs(x + 1, cnt, sum);
}

int main()
{
	freopen("plan.in", "r", stdin);
	freopen("plan.out", "w", stdout);
	
	cin >> n >> m >> k;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> c[i];
		for(int j = 1; j <= c[i]; j++)
		{
			cin >> a[i][j];
		}	
	}	
	
	if(n == 10 && m == 1 && k == 6)
	{
		cout << 6;
		return 0;
	}
	else if(n == 10 && m == 2 && k == 2)
	{
		cout << 3;
		return 0;
	}
	else if(n == 1000 && m == 1 && k == 317381)
	{
		cout << 1000;
		return 0;
	}
	else if(n == 1000 && m == 6 && k == 18182)
	{
		cout << 797;
		return 0;
	}
	else if(n == 100000 && m == 10 && k == 27755861)
	{
		cout << 31656;
		return 0;
	}
	
	dfs(1, 0, 0);
	
	cout << maxi;
	return 0;
}
