#include <bits/stdc++.h>
using namespace std;
bool a[10000005];
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	a[0]=a[1]=1;
	for (int i=2;i<=10000000;i++)
	{
		if (a[i]==1) continue;
		for (int j=i*2;j<=10000000;j+=i)
		{
			a[j]=1;
		}
	}
	int n , v=2 , cnt=0;
	cin >> n;
	while (cnt<n)
	{
		if (a[v]==0)
		{
			cnt++;
			cout << v << " ";
		}
		v++;
	}
	return 0;
}