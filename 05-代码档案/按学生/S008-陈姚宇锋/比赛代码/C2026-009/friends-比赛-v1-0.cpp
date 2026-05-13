#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
int dis[10000009];
signed main() 
{
 	freopen("friends.in", "r", stdin);
 	freopen("friends.out", "w", stdout);
 	int n;
 	cin>>n;
 	int sum=0;
 	for(int i=1;i<=n;++i)
 	{
 		cin>>a[i];
 		dis[i]=dis[i-1]+a[i];
		if(i==1)
		{
			sum=a[i];
		}
		else
		{
			sum=__gcd(sum,a[i]);
		} 
	}
	cout<<sum<<' '; 
	for(int i=1;i<n;++i)
	{
		int sum2=0;
		int num=0;
		for(int j=num+1;j<=n;++j)
		{
			if(sum2==0)
			{
				sum2=a[j];
			}
			else
			{
				sum2=__gcd(sum,a[j]-a[num]);
			}
			num=j;
		}
		cout<<sum2<<' ';
	}
  	return 0;
}
