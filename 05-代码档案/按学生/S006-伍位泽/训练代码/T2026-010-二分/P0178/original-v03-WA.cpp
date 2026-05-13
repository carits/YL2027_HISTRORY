#include <bits/stdc++.h>
using namespace std;
int q , k , n , a , b;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> q;
	while (q--)
	{
		cin >> k >> n >> a >> b;
		if (k<=b*n)
		{
		  cout << -1 << "\n";
		  continue;
    }
		int x=(k-b*n-1)/(a-b);
    cout << min (n , x) << "\n"; 
	}
	return 0;
}