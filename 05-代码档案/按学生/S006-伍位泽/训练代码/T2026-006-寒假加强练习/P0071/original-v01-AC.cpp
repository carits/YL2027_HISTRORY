#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main ( )
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t , n , sum=0 , minn=1e9;
	cin >> t;
	while (t--)
	{
		sum=0 , minn=1e9;
		cin >> n;
		for (int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		for (int i=1;i<=n-1;i++)
		{
			sum+=abs (a[i]-a[i+1]);	
		}
		minn=min ({minn , sum-abs (a[1]-a[2]) , sum-abs (a[n-1]-a[n])});
		for (int i=2;i<=n-1;i++)
		{
			minn=min (minn , sum-abs (a[i-1]-a[i])-abs (a[i]-a[i+1])+abs (a[i-1]-a[i+1]));
		}
		cout << minn << "\n";
	}
	return 0;
 }