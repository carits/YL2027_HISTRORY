#include<bits/stdc++.h>
using namespace std;
int a[205];
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t , n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int sum=0;
		for (int i=1;i<=n*2;i++)
		{
			cin >> a[i];
		}
		sort (a+1 , a+n*2+1);
		cout << a[n]-a[1]+a[n*2]-a[n+1] << "\n";
		for (int i=1;i<=n;i++)
		{
			cout << a[i] << " " << a[i+n] << "\n";
		}
	}
	return 0;
}