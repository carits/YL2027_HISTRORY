#include <bits/stdc++.h>
using namespace std;
int a[200005];
int n;
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort (a+1 , a+n+1);
	if (n==1)
	{
		cout << -1;
		return 0;
	}
	bool lll=0;
	for (int i=1;i<=n-1;i++)
	{
		if (a[i]!=a[i+1])
		{
			lll=1;
		}
	}
	if (lll==0)
	{
		cout << 1 << "\n";
		cout << a[1] << " "; 
		return 0;
	}
	if (n==2)
	{
		int cnt=2;
		if ((a[1]+a[2])%2==0)
		{
			cnt++;
		}
		cout << cnt << "\n";
		cout << a[1]-(a[2]-a[1]) << " ";
		if ((a[1]+a[2])%2==0)
		{
			cout << (a[1]+a[2])/2 << " ";
		}
		cout << a[2]+(a[2]-a[1]) << " ";
	}
	else if (n==3)
	{
		if (a[3]-a[2]==a[2]-a[1])
		{
			cout << 2 << "\n";
			cout << a[1]-(a[2]-a[1]) << " ";
			cout << a[3]+(a[3]-a[2]) << " ";
		}
		else if (a[3]-a[2]==(a[2]-a[1])*2)
		{
			if ((a[3]+a[2])%2==0)
			{
				cout << 1 << "\n";
				cout << (a[3]+a[2])/2 << " ";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if ((a[3]-a[2])*2==a[2]-a[1])
		{
			if ((a[1]+a[2])%2==0)
			{
				cout << 1 << "\n";
				cout << (a[1]+a[2])/2 << " ";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		bool p=0;
		int v=a[2]-a[1];
		for (int i=1;i<=n-1;i++)
		{
			if ((a[i+1]-a[i])!=v)
			{
				p=1;
				break;
			}
		}
		if (p==0)
		{
			cout << 2 << "\n";
			cout << a[1]-v << " ";
			cout << a[n]+v << " ";
		}
		else
		{
			int l=1e9 , cnt=0;
			if (a[3]-a[2]!=v&&a[4]-a[3]!=v)
			{
				v=a[3]-a[2];
			}
			for (int i=1;i<=n-1;i++)
			{
				if (a[i+1]-a[i]==v*2)
				{
					if ((a[i+1]+a[i])%2==0)
					{
						l=(a[i+1]+a[i])/2;
					}			
					cnt++;
				}	
			}
			if (l==1e9||cnt>=2)
			{
				cout << 0 << "\n";
			}
			else
			{
				cout << 1 << "\n";
				cout << l << " "; 
			}
		}
	}
	return 0;
}