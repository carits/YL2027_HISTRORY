#include<bits/stdc++.h>

using namespace std;

int n;
string s[50005];

int main()
{
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			string o = s[i] + s[j], u = s[j] + s[i];
			
			if(o > u)
			{
				swap(s[i], s[j]);
			}
		}
	}
	
	for(int i = 1; i <= n; i++)
	{
		cout << s[i];
	}
	return 0;
}