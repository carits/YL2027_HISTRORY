#include<bits/stdc++.h>

using namespace std;

int n;
string s[50005];

bool cmp(string s1, string s2)
{
	return s1 + s2 < s2 + s1;
}

int main()
{
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}
	
	sort(s + 1, s + 1 + n, cmp);
	
	for(int i = 1; i <= n; i++)
	{
		cout << s[i];
	}
	return 0;
}