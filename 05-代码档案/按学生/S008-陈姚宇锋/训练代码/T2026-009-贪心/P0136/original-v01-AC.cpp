#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,m,x,a[1000009];
signed main()
{
	cin>>t;
	while(t--)
	{
		cin>>n; 
		int ans=0,maxx=0;
		for(int i=1;i<=n;++i)
		{
			a[i]=i;
		}
		for(int i=1;i<=n;++i)
		{
			int sum=0;
			reverse(a+i,a+n+1);
			for(int j=1;j<=n;++j)
			{
				sum+=j*a[j];
				maxx=max(maxx,j*a[j]);
			}
			ans=max(ans,sum-maxx);
			reverse(a+i,a+n+1);
		}
		cout<<ans<<endl;
	}
	return 0;
}