#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[100009];
int check2(int x)
{
	int l=0;
	int r=n+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(a[mid]>x)
		{
			r=mid;
		}
		if(a[mid]<x)
		{
			l=mid;
		}
		if(a[mid]==x)
		{
			r=mid;
		}
	}
	return r;
}
int check1(int x)
{
	int l=0;
	int r=n+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(a[mid]>x)
		{
			r=mid;
		}
		if(a[mid]<x)
		{
			l=mid;
		}
		if(a[mid]==x)
		{
			l=mid;
		}
	}
	return l;
}
signed main()
{
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	a[0]=INT_MIN;
	a[n+1]=INT_MAX;
	int ans=0;
	while(m--)
	{
		int x;
		cin>>x;
		int num1=check2(x);
		int num2=check1(x);
		ans+=min(abs(a[num1]-x),abs(a[num2]-x));
	}
	cout<<ans;
	return 0;
}