#include<bits/stdc++.h>

#define int long long

using namespace std;

int a, b, p;

signed main()
{
	cin >> a >> b >> p;
	
	int u = pow(a, b);
	int o = u % p;
	cout << a << "^" << b << " mod " << p << "=" << o;
	return 0;
} 