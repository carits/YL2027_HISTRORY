#include <bits/stdc++.h>

using namespace std;

const int kN = 1e5 + 5;

int sum[kN];

int main()
{
	int n, q;
	string s;
	cin >> n >> q >> s;
	
	for(int i = 1; i <= n; i ++)
	{
		sum[i] = sum[i - 1] + int(s[i - 1] - 'a' + 1);
	}
	
	while(q --)
	{
		int l, r;
		cin >> l >> r;
		cout << sum[r] - sum[l - 1] << "\n";
	}
	
	return 0;
}