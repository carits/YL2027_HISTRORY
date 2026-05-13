#include <bits/stdc++.h> 
using namespace std;
#define int long long
int a[1000009];
int n,m;
bool check(int x)
{
	int sum=0;
	for(int i=1;i<=n;++i)
	{
		if(a[i]>=x)
		{
			sum+=(a[i]-x);
		}
	}
	return sum>=m;
} 
signed main()
{
	
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	int l=0;
	int r=4e5+1;
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
	cout<<l<<endl;
	return 0;
}