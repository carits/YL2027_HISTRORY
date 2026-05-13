#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[150005];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int ans=0;
	for(int k=1;k<=n;k++)
	{
		if(n%k!=0) continue;  
		int maxi=-1e18,mini=1e18;
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=a[i];
			if(i%k==0)
			{
				maxi=max(maxi,sum);
				mini=min(mini,sum);
				sum=0;
			}
		}
		ans=max(ans,maxi-mini);
	}
	cout<<ans<<"\n";
}
signed main()
{
	cin>>t;
	while(t--)
		solve();
	return 0;
}