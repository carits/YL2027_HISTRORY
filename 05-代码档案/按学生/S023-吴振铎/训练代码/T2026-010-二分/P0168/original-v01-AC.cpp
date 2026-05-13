#include<bits/stdc++.h>
using namespace std;
int n,k,h[100010],w[100010];
int check(int mid)
{
	long long cnt=0;
	for(int i=1;i<=n;i++)
	{
		cnt+=(w[i]/mid)*(h[i]/mid);	
	}	
	return cnt>=k;
} 
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i]>>w[i];
	}
	int l=1,r=1e5,mid,z;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(check(mid))
		{
			l=mid+1;
			z=mid;
		}
		else
		{
			r=mid-1;
		}
	}
	cout<<z;
	return 0;
} 