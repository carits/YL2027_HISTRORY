#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n,maxx,k,l[1000009];
bool check(int x)
{
	int sum=0;
	for(int i=1;i<=n;++i)
	{
		sum+=l[i]/x; 
	}
	return sum>=k;
}
signed main()
{
	cin>>n>>k;
	for(int i=1;i<=n;++i)
	{
		cin>>l[i];
		maxx=max(maxx,l[i]);
	}
	int l=0,r=maxx+1;
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