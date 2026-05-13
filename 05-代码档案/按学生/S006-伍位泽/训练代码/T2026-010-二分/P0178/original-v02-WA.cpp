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
		int l=-1 , r=n;
		while (l+1<r)
		{
			int mid=(l+r)/2;
			if (k>a*mid+b*(n-mid))
			{
				l=mid;
			}
			else
			{
				r=mid;
			}
		}
		cout << l << "\n";
	}
	return 0;
}