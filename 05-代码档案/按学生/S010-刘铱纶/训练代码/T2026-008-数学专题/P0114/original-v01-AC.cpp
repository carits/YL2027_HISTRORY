#include<bits/stdc++.h>

using namespace std;

int t, n;

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n;
		
		int sum = 3, cheng = 2, cnt = 2;
		while(n % sum != 0)
		{
			cheng *= 2;
			sum += cheng;
			cnt++;
		}
		
		cout << n / sum << "\n";
	}
	return 0;
}