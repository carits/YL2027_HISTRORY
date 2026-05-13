#include <bits/stdc++.h>
using namespace std;
#define int long long
int diff[1000009];
int a[1000009];
int b[1000009];
signed main()
{
	int n,m; 
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		diff[i]=diff[i-1];
		if(a[i]<a[i-1])
		{
			diff[i]+=(a[i-1]-a[i]);
		}
	}
	for(int i=n;i>=1;--i)
	{
		b[i]=b[i+1];
		if(a[i]<a[i+1])
		{
			b[i]+=a[i+1]-a[i];
		}
	}
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		if(l>r)
		{
			cout<<b[r]-b[l]<<endl;
		}
		else
		{
			cout<<diff[r]-diff[l]<<endl;
		}
		
	}
}