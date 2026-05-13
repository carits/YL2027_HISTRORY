#include <bits/stdc++.h>
using namespace std;
string a , b;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t , n , m;
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> a >> b;
		bool p=0;
		int cnt=0;
		a=" "+a;
		b=" "+b;
		while (a.size ( )<=b.size ( )*3)
		{
			if (a.size ( )<b.size ( ))
			{
				a+=a;
				cnt++;
				continue;
			}
			for (int i=1;i<=a.size ( )-b.size ( )+1;i++)
			{
				if (a.substr (i , b.size ( ))==b)
				{
					p=1;
					break;
				}		
			}
			cnt++;
		}
		if (p==0)
		{
			cout << -1 << "\n";
		}
		else
		{
			cout << cnt <<"\n";
		}
	}
	return 0;
}