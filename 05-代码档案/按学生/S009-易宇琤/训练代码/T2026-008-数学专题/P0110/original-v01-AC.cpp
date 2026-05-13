#include <bits/stdc++.h>

using namespace std;

const int kN =  1e5 + 5;

int a[kN];

int gcd(int x, int y)
{
	if(y == 0)
	{
		return x;
	}
	return gcd(y, x % y);
}

void work()
{
	int n, ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	
	int l = 1, r = n;
	while(l < r)
	{
		ans = gcd(ans, abs(a[l] - a[r]));
		l ++;
		r --;
	}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	
	while(t --)
	{
		work();
	}
	return 0;
}