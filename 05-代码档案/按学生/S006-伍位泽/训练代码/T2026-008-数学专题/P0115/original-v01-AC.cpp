#include <bits/stdc++.h>
using namespace std;
int a[3005];
bool zs (int n)
{
	if (n<=1) return 0;
	for (int i=2;i<=sqrt (n);i++)
	{
		if (n%i==0) return 0;
	}
	return 1;
}
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i=2;i<=3000;i++)
	{
		if (zs (i)==0) continue;
		for (int j=i;j<=3000;j+=i)
		{
			a[j]++;
		}
	}
	int n , cnt=0;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		if (a[i]==2)
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}