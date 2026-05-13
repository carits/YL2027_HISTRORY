#include <bits/stdc++.h>
using namespace std;

int main ( )
{
	int n , a , b , c;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c;
		cout << (abs (a-b)+2*c-1)/(2*c) << "\n";
	}
	return 0;
}