#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,c;
int a[1000009];
bool check(int x)
{
	int ans=a[1];
	int sum=1;
	for(int i=2;i<=n;++i)
	{
		if(a[i]-ans>=x)
		{
			sum++;
			ans=a[i];
		}
	}
	return sum>=c;
}
signed main()
{
	cin>>n>>c;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int l=0,r=a[n]+1;
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
