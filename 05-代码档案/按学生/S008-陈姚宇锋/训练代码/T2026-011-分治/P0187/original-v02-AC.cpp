#include <bits/stdc++.h>
using namespace std;
#define int  long long
int n;
int a[1000009];
int tmp[1000009];
int sum=0;
void check(int x,int y)
{
	if(x==y)
	{
		return ;
	}
	int m=x+(y-x)/2;
	check(x,m);
	check(m+1,y);	
	int l=x,r=m+1,k=x;
	while(l<=m && r<=y)
	{
		if(a[l]>a[r])
		{	
			tmp[k++]=a[l++]; 
			sum+=(y-r+1);
		}
		else
		{
			tmp[k++]=a[r++];
		}
	}
	for(;l<=m;l++,k++)
	{
		tmp[k]=a[l];
	}
	for(;r<=y;r++,k++)
	{
		tmp[k]=a[r];
	}
	for(k=x;k<=y;k++)
	{
		a[k]=tmp[k];
	}
	return ;
}
signed main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	check(1,n);
	cout<<sum;
	return 0;	
}