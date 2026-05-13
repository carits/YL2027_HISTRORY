#include <bits/stdc++.h>
using namespace std;
int a[25][3];
bool p[25];
int n , cnt=0;
void dfs (int k)
{
	if (k==n+1)
	{
		cnt++;
	}
	for (int i=1;i<=2;i++)
	{
		if (p[a[k][i]]==0)
		{
			p[a[k][i]]=1;
			dfs (k+1);
			p[a[k][i]]=0;
		} 
	}
}
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i][1] >> a[i][2];
	}
	dfs (1);
	cout << cnt;
	return 0;
} 
