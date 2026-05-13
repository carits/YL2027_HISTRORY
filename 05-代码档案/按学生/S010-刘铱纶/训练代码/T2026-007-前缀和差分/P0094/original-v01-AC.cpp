#include<bits/stdc++.h>

using namespace std;

int t, n, pre[100005];
map<int, int> mp;
string a;

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n >> a;
		a = '#' + a;
		
		pre[0] = 0;
		mp.clear();
		for(int i = 1; i <= n; i++)
		{
			pre[i] = pre[i - 1] + (a[i] - '0') - 1; 
			mp[pre[i]]++; 
		} 
		
		mp[0]++;
		
		long long sum = 0;
		for(int i = 0; i <= n; i++)
		{
			sum += mp[pre[i]] - 1;
		}
		
		cout << sum / 2 << "\n";
	}
	return 0;
}