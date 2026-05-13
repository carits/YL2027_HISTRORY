#include <bits/stdc++.h>

using namespace std;

string s[4];

void work()
{
	cin >> s[0] >> s[1] >> s[2];
	
	for(int i = 0; i < 3; i ++)
	{
		if(s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][1] != '.')
		{
			cout << s[i][1] << "\n";
			return;
		}
	}
	
	for(int i = 0; i < 3; i ++)
	{
		if(s[0][i] == s[1][i] && s[1][i] == s[2][i] && s[1][i] != '.')
		{
			cout << s[1][i] << "\n";
			return;
		}
	}
	
	if(s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[1][1] != '.')
	{
		cout << s[1][1] << "\n";
		return;
	}
	
	if(s[2][0] == s[1][1] && s[1][1] == s[0][2] && s[1][1] != '.')
	{
		cout << s[1][1] << "\n";
		return;
	}
	
	cout << "DRAW\n";
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
}//