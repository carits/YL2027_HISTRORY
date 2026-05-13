#include <bits/stdc++.h>

using namespace std;

const int kN = 1e5 + 5;

int sum[kN];
map<int, int> mp;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	
	for(int i = 1; i <= n; i ++)
	{
		sum[i] = s[i - 1] == '0' ? sum[i - 1] - 1 : sum[i - 1] + 1;
		if(mp[sum[i]] == 0)
		{
			mp[sum[i]] = i;
		}
	}
	
	mp[0] = 0;
	
	int ans = 0;
	for(int i = 1; i <= n; i ++)
	{
			ans = max(ans, i - mp[sum[i]]);
	}
	cout << ans;
	return 0;
}