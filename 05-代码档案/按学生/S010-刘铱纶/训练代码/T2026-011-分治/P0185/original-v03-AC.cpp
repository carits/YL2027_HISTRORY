#include<bits/stdc++.h> 

#define int long long

using namespace std;

int a, b, p, o;

void hanshu(int a, int b, int p)
{
	o = 1;
	
	while(b >= 1)
	{
		if(b % 2 == 1)
		{
			o = o * a % p; 
		} 
		
		a = a * a % p;
		b /= 2;
	}
	
	return;
}

signed main()
{
	cin >> a >> b >> p;
	
	hanshu(a, b, p);
	
	cout << a << "^" << b << " mod " << p << "=" << o;
	return 0;
} 