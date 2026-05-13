#include<bits/stdc++.h>

using namespace std;

int t, n, x, y, a[55];

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n >> x >> y;
		
		int o = y - x, cnt = 0, i = 0;
		memset(a, 0, sizeof a);
		
		while(i++)
		{
			if(i > o)
			{
				break;
			}
			
			if(o % i == 0)
			{
				if(o / i + 1 == n)
				{
					o = i;
					break;
				}
			}
		}
		
		for(int i = y; i >= 1 && cnt < n; i -= o)
		{
			a[++cnt] = i;
		}
		
		int sum = i + o;
		while(cnt < n)
		{
			a[++cnt] = sum;
			sum += o;
		}
		
		for(int i = 1; i <= cnt; i++)
		{
			cout << a[i] << " ";
		}
		
		cout << "\n";
	}
	return 0;
}