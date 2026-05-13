#include <bits/stdc++.h>
#define int long long
using namespace std;
int n , k;
long long sum (int m)
{
	long long lll=0 , mul=1;
	while (1)
	{
		if (mul>=m)
		{
			break;
		}
		mul*=k;
		lll+=m/mul;
	}
	return lll+m;
}
signed main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	int l=0 , r=1000000000;
	while (l<r)
	{
		int mid=(l+r)/2;
		if (sum (mid)>=n)
		{
			r=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	cout << l;
	return 0;
}