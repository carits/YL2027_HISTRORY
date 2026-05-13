#include <bits/stdc++.h>
using namespace std;
string s;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t , n , k;
	char p;
	cin >> t;
	while (t--)
	{
		cin >> n >> k >> s;
		int cnt=0;
		s=" "+s;
		for (int i=1;i<=n;i++)
		{
			if (s[i]=='B')
			{
				cnt++;
				for (int j=i;j<=min (i+k-1 , n);j++)
				{
					s[j]='W';
				}
			}	
		}
		cout << cnt << "\n";
	}
	return 0;
}