#include <bits/stdc++.h>
using namespace std;
#define int long long
int diff[1000009];
int a[1000009];
int b[1000009];
signed main()
{
	int n,m; 
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		diff[i]=diff[i-1]+a[i];
	}
	int ans=0;
	int minn=INT_MAX;
	for(int i=1;i<=n-m+1;++i)
	{
		if(minn>(diff[i+m-1]-diff[i-1]))
		{
			minn=diff[i+m-1]-diff[i-1];
			ans=i;
		}
	}
	cout<<ans;
}