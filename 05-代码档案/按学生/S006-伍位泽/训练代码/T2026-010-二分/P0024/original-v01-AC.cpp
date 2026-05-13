#include <bits/stdc++.h>
using namespace std;
int a , b;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b;
	for (int i=a;i>=0;i--)
	{
		if ((1+i)*i/2*5+b<=240)
		{
			cout << i;
			return 0;
		}
	}
	return 0;
}