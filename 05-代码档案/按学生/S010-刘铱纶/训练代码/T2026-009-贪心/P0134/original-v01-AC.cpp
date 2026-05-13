#include<bits/stdc++.h>

using namespace std;

int t, n, m;
string x, s;

int main()
{
	cin >> t;
	
	while(t--)
	{
		cin >> n >> m >> x >> s;
		
		int cnt = 0, v = 0;
		while(cnt<=10)
		{
			int o = x.find(s);
			if(o != -1)
			{
				v = 1;
				break;
			}
			
			cnt++;
			x = x + x;
		}
		
		if(v == 0)
		{
			cout << "-1" << "\n";
		}
		else
		{
			cout << cnt << "\n";
		}
	}
	return 0;
}