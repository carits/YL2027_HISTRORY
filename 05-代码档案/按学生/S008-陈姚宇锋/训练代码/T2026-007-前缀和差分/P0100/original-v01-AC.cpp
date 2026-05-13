#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[10000009];
int diff[10000009];
signed main()
{
	int n,p;
	cin>>n>>p;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		diff[i]=a[i]-a[i-1];
	}
	while(p--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		diff[x]+=z;
		diff[y+1]-=z;	
	}	
	int minn=INT_MAX;
	for(int i=1;i<=n;++i)
	{
		a[i]=a[i-1]+diff[i]; 
		minn=min(minn,a[i]);
	}
	cout<<minn;
	
	return 0;
}