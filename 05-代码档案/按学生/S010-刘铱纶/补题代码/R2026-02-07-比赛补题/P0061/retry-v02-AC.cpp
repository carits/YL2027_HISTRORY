#include<bits/stdc++.h>

using namespace std;

int n, x, y;
string k;

int main()
{
	cin >> n >> x >> y >> k;
	
	string s = "";
	while(x--)
	{
		if(x == y)
		{
			s += '1';
		}
		else
		{
			s += '0';
		}
	}
	
	int len = s.size();
	k = k.substr(n - len);
	
	int cnt = 0;
	for(int i = 0; i < len; i++)
	{
		if(k[i] != s[i])
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}