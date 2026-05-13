#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010],x[100010]={0},y[100010]={0},l,r;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		if(a[i+1]<a[i])
		{
			x[i]=x[i-1]+(a[i]-a[i+1]);
		}
		else
		{
			x[i]=x[i-1];
		}
	}
	y[n+1]=0;
	for(int i=n;i>1;i--)
	{
		if(a[i-1]<=a[i])
		{
			y[i]=y[i+1]+a[i]-a[i-1];
		}
		else
		{
			y[i]=y[i+1];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cin>>l>>r;
		if(l<r)
		{
			cout<<x[r-1]-x[l-1]<<endl;
		}
		else
		{
			cout<<y[r+1]-y[l+1]<<endl;
		}
	}
	return 0;
}