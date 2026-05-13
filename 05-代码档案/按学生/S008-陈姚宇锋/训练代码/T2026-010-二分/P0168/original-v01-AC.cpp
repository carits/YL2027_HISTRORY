#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[100009],b[100009];
bool check(int x)
{
	int sum=0;
	for(int i=1;i<=n;++i)
	{
		sum+=(a[i]/x)*(b[i]/x);
	}
	return sum>=m;
}
signed main()
{
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i]>>b[i];
	}
	int l=0;
	int r=100001;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(check(mid))
		{
			l=mid;
		}
		else
		{
			r=mid;
		}
	}
	cout<<l;
	return 0;
}