#include <bits/stdc++.h>
using namespace std;
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
	int n , k , cnt=0;
	cin >> n >> k;
	for (int i=2;i<=n;i++)
	{
		int v=i-1 , a=(v-2)/2 , b=v-a; 
		if (v==5||(zs (a)==1&&zs (b)==1))
		{
			cnt++;
		}
	}
	if (cnt>=k)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}