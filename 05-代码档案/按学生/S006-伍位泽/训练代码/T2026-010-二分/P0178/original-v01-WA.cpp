#include <bits/stdc++.h>
using namespace std;
int q , k , n , a , b;
bool sf (int l)
{
	int p=k;
	p-=l*a;
	p-=(n-l)*b;
	if (p>0) return 1;
	return 0;
}
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
			if (sf (mid)==1)
			{
				l=mid;
			}
			else
			{
				r=mid-1;
			}
		}
		cout << l << "\n";
	}
	return 0;
}