#include <bits/stdc++.h>
using namespace std ;
long long t , n ; 
int main()
{
	cin >> t ;
	while(t --)
	{
		cin >> n ;
		for(int i = INT_MAX ; i >= 3 ; i /= 2)
		{
			if(n % i == 0)
			{
				cout << n / i << "\n" ;
				break ;
			}
		}
	}
	return 0 ;
}