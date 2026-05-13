#include <bits/stdc++.h>

using namespace std;

const int kN = 15e4 + 5;

int a[kN];

int main()
{
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	
	int sum = 0;
	for(int i = 1; i <= n; i ++)
	{
		sum += a[i];
	}
	
	int h = 1, t = k, ans = INT_MAX, pos = 0;
	while(t <= n)
	{
		if(sum < ans)
		{
			ans = sum;
			pos = h;
		}
		sum -= a[h];
		t ++;
		h ++;
		sum += a[t];
	}
	
	cout << pos;
	return 0;
}