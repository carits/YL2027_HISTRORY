#include <bits/stdc++.h>
using namespace std;
bool zs (int n)
{
	if (n<=1) return 0;
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0) return 0;
	}
	return 1;
}
bool tt (int x , int y)
{
	for (int i=x+1;i<=y-1;i++)
	{
		if (zs (i)==1) return 0;
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
		int v=i-1;
		if (zs (i)==0) continue;
		for (int j=2;j<v/2;j++)
		{
			int a=j , b=v-j;
			if (zs (a)==1&&zs (b)==1&&tt (a , b)==1)
			{
				cnt++;
				break;
			}
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