#include<bits/stdc++.h>

using namespace std;

int t, n, a[200005], pre[200005];

int main()
{
	for(int i = 1; i <= 2e5; i++)
	{
		int x = i, sum = 0;
		while(x > 0)
		{
			sum += x % 10;
			x /= 10;
		}
		
		pre[i] = pre[i - 1] + sum;
	}
	
	cin >> t;
	while(t--)
	{
		cin >> n;
		cout << pre[n] << "\n";
	}
	return 0;
}