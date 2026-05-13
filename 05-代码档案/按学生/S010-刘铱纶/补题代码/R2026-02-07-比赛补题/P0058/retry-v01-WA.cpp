#include<bits/stdc++.h>

using namespace std;

int t, a, b;
string s;

void solve()
{
	cin >> a >> b >> s;
	
	int x = 0, y = s.size() - 1;
	
	int o = 0;
	while(x < y)
	{
		if(s[x] == s[y] && s[x] == '?')
		{
			o += 2;
		}
		else if(s[x] == '?')
		{
			s[x] = s[y];
		}
		else if(s[y] == '?')
		{
			s[y] = s[x];
		}
		else if(s[x] != s[y])
		{
			cout << -1 << "\n";
			return ;
		}
		x++, y--;
	}
	if(x == y && s[x] == '?')
	{
		o++;
	}
	
	int ans1 = 0, ans2 = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '1')
		{
			ans1++;
		}
		else if(s[i] == '0')
		{
			ans2++;
		}
	}
	
	a -= ans2, b -= ans1;
	if(a + b != o)
	{
		cout << -1 << "\n";
		return ;
	}
	
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '?')
		{
			if(a > 0)
			{
				if(i == s.size() - i - 1)
				{
					a--;
				}
				else
				{
					a -= 2;
				}
				s[i] = s[s.size() - i - 1] = '0';
			}
			else
			{
				if(i == s.size() - i - 1)
				{
					b--;
				}
				else
				{
					b -= 2;
				}
				s[i] = s[s.size() - i - 1] = '1';
			}
		}
	}
	
	if(a == 0 && b == 0)
	{
		cout << s << "\n";
	}
	else
	{
		cout << -1 << "\n";
	}
	
	return ;
}

int main()
{
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}