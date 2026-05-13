#include <bits/stdc++.h>
using namespace std;
long long a[2000000];
long long b[2000000];
int n,m;
int check(int x)
{
	int r=n+1;
	int l=0;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
		{
			r=mid;
		}
		else if(a[mid]>x)
		{
			r=mid;
		}
		else
		{
			l=mid;
		} 
	}
	if(a[r]==x)
	{
		return r;
	}
	return -1;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	} 
	sort(a+1,a+1+n);
	a[0]=-1;
	a[n+1]=INT_MAX;	
	for(int i=1;i<=m;++i)
	{
		cin>>b[i];
		cout<<check(b[i])<<' ';
	}
	return 0;
}