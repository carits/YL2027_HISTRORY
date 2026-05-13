#include<bits/stdc++.h> 

#define int long long

using namespace std;

int a, x, m;

struct Node
{
	int x, y;
};

Node hanshu(int a, int x, int m)
{
	if(x == 1)
	{
		return {1 % m, a};
	}
	
	Node c = hanshu(a, x / 2, m);
	
	if(x % 2 == 0)
	{
		c.x = c.x * (1 + c.y) % m;
		c.y = ((c.y % m) * (c.y % m)) % m;
	}
	else
	{
		c.x = ((c.x * (1 + a * c.y % m ) + c.y) % m) % m;
		c.y = (((c.y % m) * (c.y % m)) % m * a) % m;
	}
	
	return c;
}

signed main()
{
	cin >> a >> x >> m;
	
	cout << hanshu(a, x, m).x; 
	return 0;
}