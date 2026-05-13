#include<bits/stdc++.h>

using namespace std;

int n, pre[100005];
string s;
map<int, int> mp;

int main()
{
	cin >> n >> s;
	s = '#' + s;
	
	mp[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		if(s[i] == '0')
		{
			pre[i] = pre[i - 1] + 1;
		}
		else
		{
			pre[i] = pre[i - 1] - 1;
		}
		
		if(mp[pre[i]] == 0)
		{
			mp[pre[i]] = i; 
		}
	}
	
	int maxi = 0;
	for(int i = 1; i <= n; i++)
	{
		maxi = max(maxi, i - mp[pre[i]]);
	}
	
	cout << maxi;
	return 0; 
}