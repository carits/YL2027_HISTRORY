#include <bits/stdc++.h>
using namespace std;
int a[105];
int main ( )
{
	int t , n , m , v;
	cin >> t;
	while (t--)
	{
		int maxn=0;
		memset (a ,0 ,sizeof (a));
		cin >> n;
		while (n--)
		{
			cin >>v;
			a[v]++;
			maxn=max (maxn , a[v]);
		}
		if (a[m]==maxn)
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