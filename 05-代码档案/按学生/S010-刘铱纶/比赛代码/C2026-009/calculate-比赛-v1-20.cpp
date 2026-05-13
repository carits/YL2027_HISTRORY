#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, a[100005];

signed main() 
{
	freopen("calculate.in", "r", stdin);
	freopen("calculate.out", "w", stdout);
	
	cin >> n;
	
	a[0] = 1;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i]; 
		a[i] *= a[i - 1];
	}
	
	int x, y;
	cin >> x >> y;
	
	cout << x * y;
	return 0;
}
