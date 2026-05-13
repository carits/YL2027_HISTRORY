#include <bits/stdc++.h>
using namespace std;
bool zs (int k)
{
	if (k<=1) return 0;
	for (int i=2;i<=sqrt (k);i++)
	{
		if (k%i==0) return 0;
	}
	return 1;
}
int n;
void dfs (int step , int sum)
{
	if (sum!=0&&zs (sum)==0) return;
	if (step==n+1)
	{
		cout << sum << "\n";
		return;
	}
	for (int i=0;i<=9;i++)
	{
		if (sum==0&&i==0) continue;
		dfs (step+1 , sum*10+i);
	}
} 
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	dfs (1 , 0);
	return 0;
} 