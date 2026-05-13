#include<bits/stdc++.h>

using namespace std;

int a, b, p;

int main()
{
	cin >> a >> b >> p;
	
	int u = pow(a, b);
	int o = u % p;
	cout << a << "^" << b << " mod " << p << "=" << o;
	return 0;
} 