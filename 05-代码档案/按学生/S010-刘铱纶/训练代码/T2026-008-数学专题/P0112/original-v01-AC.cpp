#include<bits/stdc++.h>

using namespace std;

int n, k, a[1005], o;
bool vis[1005];

void init(int x)
{
	vis[1] = 1;
	for(int i = 2; i * i <= x; i++)
	{
		if(vis[i] == 0)
		{
			for(int j = i * i; j <= x; j += i)
			{
				vis[j] = 1;
			}
		}
	}
	
	for(int i = 1; i <= x; i++)
	{
		if(vis[i] == 0)
		{
			a[++o] = i;
		} 
	}
}

int main()
{
	init(1000);
	
	cin >> n >> k;
	
	int ans = 0;
	for(int i = 2; i <= n; i++)
	{
		
		if(vis[i] == 1)
		{
			continue;
		}
		
		int x = i;
		x--;
		
		for(int j = 1; j <= o; j++)
		{
			
			if(a[j] >= x)
			{
				break;
			}
			
			if(a[j] + a[j + 1] == x)
			{
				ans++;
				break;
			}
		}
	}
	
	if(ans >= k)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO"; 
	}
	return 0;
}