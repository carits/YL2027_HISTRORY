#include<bits/stdc++.h>

using namespace std;

int t, n, x, y, a[55];

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> n >> x >> y;
		
		int o = y - x, cnt = 0;
		memset(a, 0, sizeof a);
		
		for(int i = 1; i <= o; i++)
		{
			if(o % i == 0)
			{
				if(o / i + 1 <= n)
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
		
		int sum = y + o;
		while(cnt < n)
		{
			a[++cnt] = sum;
			sum += o;
		}
		
		sort(a + 1, a + 1 + n);  
		for(int i = 1; i <= n; i++)
		{
			cout << a[i] << " ";
		}
		
		cout << "\n";
	}
	return 0;
}