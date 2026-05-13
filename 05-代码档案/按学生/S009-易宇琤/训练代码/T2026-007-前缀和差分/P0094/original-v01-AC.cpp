#include <bits/stdc++.h>

using namespace std;

const int kN = 1e5 + 5;

int a[kN], sum[kN];
map<int, int> mp;

void work()
{
	int n;
	string s;
	cin >> n >> s;
	
	mp.clear();
	
	for(int i = 1; i <= n; i ++)
	{
		sum[i] = sum[i - 1] + (s[i - 1] - '0') - 1;
	}
	
	long long ans = 0;
	for(int i = 0; i <= n; i ++)
	{
		mp[sum[i]] ++;
		ans += mp[sum[i]] - 1;
	}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t --)
	{
		work();
	}
	return 0;
}