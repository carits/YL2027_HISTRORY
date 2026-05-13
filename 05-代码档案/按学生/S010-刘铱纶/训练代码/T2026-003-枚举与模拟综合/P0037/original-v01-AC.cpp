#include<bits/stdc++.h>

#define int long long

using namespace std;

int n, a[100005];
map<int, int> t;

signed main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];	
		t[a[i]]++;
	}	
	int ans = 0;
	for(int i = 1; i < n; i++)
	{
		t[a[i]]--;
		for(int j = 0; j <= 30; j++)
		{
			int k = (1 << j) - a[i];
			ans += t[k];
		}
	}
	cout << ans;
	return 0;
}