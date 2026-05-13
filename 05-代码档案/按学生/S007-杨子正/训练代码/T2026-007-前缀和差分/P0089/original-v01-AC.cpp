#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int t, n, n1;
long long ans;
int l[N];
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	for (int i = 1; i <= 2e5; i++) 
	{
		l[i] = l[i - 1];
		int k = i;
		while (k) 
		{
			l[i] += k % 10;
			k -= k % 10;
			k /= 10;
		}
	}
	while (t--) 
	{
		int k;
		cin >> k;
		cout << l[k] << '\n';
	}
	return 0;
}