#include<bits/stdc++.h>

using namespace std;

int t, x, a[105];
void solve()
{
	int d = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9;
	cin >> x;
	if(x > d)
	{
		cout << -1 << "\n";
		return ;
	}
	
	int sum = 0, cnt = 0;
	for(int i = 9; i >= 1; i--)
	{
		sum += i;
		
		if(sum > x)
		{
			sum -= i;
		}
		else
		{
			a[++cnt] = i;
		}
		
		if(sum == x)
		{
			break;
		}
	}
	
	sort(a + 1, a + 1 + cnt);
	for(int i = 1; i <= cnt; i++)
	{
		cout << a[i];
	}
	cout << "\n";
	
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