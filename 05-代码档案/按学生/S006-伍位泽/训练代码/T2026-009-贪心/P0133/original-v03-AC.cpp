#include <bits/stdc++.h>
using namespace std;
bool a[105];
int main ( )
{
	int t , n , m , v;
	cin >> t;
	while (t--)
	{
		memset (a , 0 , sizeof (a));
		cin >> n >> m;
		while (n--)
		{
			cin >> v;
			a[v]=1;
		}
		if (a[m]==1)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}