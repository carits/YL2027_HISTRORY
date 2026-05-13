#include<bits/stdc++.h>

using namespace std;

int n, m, a[100005], prey[100005], prez[100005]; 

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	
	for(int i = 2; i <= n; i++)
	{
		prey[i] = prey[i - 1] + max(a[i - 1] - a[i], 0);
	}
	
	for(int i = 2; i <= n; i++)
	{
		prez[i] = prez[i - 1] + max(a[i] - a[i - 1], 0);
	}
	
	int x, y;
	for(int i = 1; i <= m; i++)
	{
		cin >> x >> y;
		if(x < y) 
		{
			cout << prey[y] - prey[x] << "\n";
		}
		else 
		{
			cout << prez[x] - prez[y] << "\n";
		}
	}
	return 0;
}