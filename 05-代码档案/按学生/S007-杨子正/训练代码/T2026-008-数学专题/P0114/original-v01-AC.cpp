#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
	cin >> t;
	while (t--)
	{
        long long n;
		cin >> n;
		for (int i = INT_MAX; i >= 3; i /= 2)
			if (n % i == 0)
			{
				cout << n / i << "\n";
				break;
			}
	}
	return 0;
}