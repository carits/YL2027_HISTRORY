#include<bits/stdc++.h>

using namespace std;

int n, a[3005], o;
bool vis[3005];

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
			
			a[++o] = i;
		}
	}
}

int main()
{
	init(3000);
	cin >> n;
	
	int ans = 0; 
	for(int i = 1; i <= n; i++)
	{
		int cnt = 0, x = i;
		for(int j = 1; j <= o; j++)
		{
			if(a[j] > x)
			{
				break;
			}
			
			if(x % a[j] == 0)
			{
				cnt++;
			}
			
			while(x % a[j] == 0)
			{
				x /= a[j];
			}
		}
		
		if(cnt == 2)
		{
			ans++;
		}
	}
	
	cout << ans;
	return 0;
}