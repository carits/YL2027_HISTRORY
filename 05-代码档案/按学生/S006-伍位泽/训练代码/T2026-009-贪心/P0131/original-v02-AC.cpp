#include <bits/stdc++.h>
using namespace std;
string s[50005];
bool cmp (string a , string b)
{
	return a+b<b+a;
}
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> s[i];
	}
	sort(s+1 , s+n+1 , cmp);
	for (int i=1;i<=n;i++)
	{
		cout << s[i];
	}
	return 0;
}