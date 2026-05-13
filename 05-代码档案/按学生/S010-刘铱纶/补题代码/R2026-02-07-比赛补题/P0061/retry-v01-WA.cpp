#include<bits/stdc++.h>

using namespace std;

int n, x, y;
string k;

int main()
{
	cin >> n >> x >> y >> k;
	x = pow(10, x);
	y = pow(10, y);
	x += y;
	
	string s = "";
	while(x > 1)
	{
		int g = x % 10;
		s = (char)(g + '0') + s;
		x /= 10;
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