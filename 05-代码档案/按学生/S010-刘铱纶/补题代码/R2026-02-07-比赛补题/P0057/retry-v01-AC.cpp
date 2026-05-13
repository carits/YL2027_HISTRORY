#include<bits/stdc++.h>

using namespace std;

int n, m, k;
string s[205][205];
map<string, int> t;

int main()
{
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			char c;
			for(int h = 1; h <= k; h++)
			{
				cin >> c;
				s[i][j] += c;
			}
			t[s[i][j]]++;
		}
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(t[s[i][j]] == 1)
			{
				cout << i << " " << j;
				return 0;
			}
		}
	}
	return 0;
}