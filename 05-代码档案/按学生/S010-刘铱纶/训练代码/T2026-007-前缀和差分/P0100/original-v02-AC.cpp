#include<bits/stdc++.h>

using namespace std;

int n, q, a[5000006], diff[5000006], x, y, z;

int main()
{
	cin >> n >> q;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		diff[i] = a[i] - a[i-1];
	}
	
	while(q--)
	{
		cin >> x >> y >> z;
		diff[x] += z;
		diff[y + 1] -= z;
	} 
	
	int mini = 1e9;
	for(int i = 1; i <= n; i++)
	{
		a[i] = a[i - 1] + diff[i];
		mini = min(mini, a[i]);
	}
	cout << mini;
	return 0;
} 