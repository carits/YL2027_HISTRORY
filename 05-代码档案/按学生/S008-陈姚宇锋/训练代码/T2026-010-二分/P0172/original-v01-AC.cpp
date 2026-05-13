#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a,b;
int c[1000009];
bool check(int x)
{
	int sum=0;
	for(int i=1;i<=n;++i)
	{
		if(c[i]<=a*x)
		{
			continue;
		}
		else
		{
			int h=(c[i]-a*x)/b;
			if(h*b<c[i]-a*x)
			{
				h++;
			}
			sum+=h;
		}
	}
	return sum<=x;
}
signed main()
{
	cin>>n>>a>>b;
	for(int i=1;i<=n;++i)
	{
		cin>>c[i];
	}
	sort(c+1,c+1+n);
	int l=0,r=n+1;
	while(l+1<r)
	{
		int mid=(l+r)/2;
		if(check(mid))
		{
			r=mid;
		}
		else
		{
			l=mid;
		}
	}
	cout<<r;
	return 0;
}
