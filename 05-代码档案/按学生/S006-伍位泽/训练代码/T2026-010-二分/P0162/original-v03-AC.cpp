#include <bits/stdc++.h>
using namespace std;
map <long long , bool> mp;
long long n;
int t;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i=1;i<=100000;i++)
	{
		mp[(long long) i*i*i]=1;
	}
	cin >> t;
	while (t--)
	{
		cin >> n;
		bool p=0;
		for (auto i:mp)
		{
			if (mp.count (n-i.first))
			{
				p=1;
				break;
			}
		}
		if (p==1)
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
	return 0;
}