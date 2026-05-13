#include<bits/stdc++.h>

using namespace std;

int n, a[200005];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	
	int k = 1;
	for(int i = 1; i <= n; i++)
	{
		if(a[i] >= k)
		{
			k++;
		}
	}
	
	cout << k - 1;
	return 0;
}