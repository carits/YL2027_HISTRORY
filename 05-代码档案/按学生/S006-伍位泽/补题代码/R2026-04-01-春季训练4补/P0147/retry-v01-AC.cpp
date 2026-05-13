#include <bits/stdc++.h>
using namespace std;
int a[200005];
int Q , n;
bool bh (int x , int y)
{
	if (x>y) swap (x , y);
	x+=(y-x)/20*20;
	int aa[5] , bb[5];
	aa[0]=x , bb[0]=y;
	for (int i=1;i<=3;i++)
	{
		x+=x%10;
		y+=y%10;
		aa[i]=x , bb[i]=y;
	}
	for (int i=0;i<=3;i++)
	{
		for (int j=0;j<=3;j++)
		{
			if (aa[i]==bb[j])
			{
				return 1;
			}
		}
	}
	return 0;
}
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> Q;
	while (Q--)
	{
		cin >> n;
		bool x=0 , y=0;
		for (int i=1;i<=n;i++)
		{
			cin >> a[i];
			a[i]+=a[i]%10;
			if (a[i]%10==0)
			{
				x=1;
			}
			else
			{
				y=1; 
			}
		}
		if (x==1&&y==1)
		{
			cout << "NO\n";
		}
		else if (x==1)
		{
			bool p=0;
			for (int i=1;i<=n-1;i++)
			{
				if (a[i]!=a[i+1])
				{
					p=1;
					break;
				} 
			}	
			if (p==0)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
		else
		{
			bool p=0;
			for (int i=1;i<=n-1;i++)
			{
				if (a[i]%10==a[i+1]%10)
				{
					if (abs (a[i]-a[i+1])%20!=0)
					{
						p=1;
						break; 
					}
				}
				else if (bh (a[i] , a[i+1])==0)
				{
					p=1;
					break;
				}
			}
			if (p==0)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
	}
	return 0;
}