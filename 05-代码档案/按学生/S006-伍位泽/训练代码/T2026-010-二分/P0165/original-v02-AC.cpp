#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int n , m , v;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	while (m--)
	{
		cin >> v;
		int pos=upper_bound (a+1 , a+n+1 , v)-lower_bound (a+1 , a+n+1 , v);
		if (pos>=1)
		{
			cout << lower_bound (a+1 , a+n+1 , v)-a << " ";
		}
		else
		{
			cout << -1 << " ";
		}
	}
	return 0;
}