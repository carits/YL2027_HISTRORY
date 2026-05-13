#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
signed main()
{
	int n;
	cin>>n;
	int sum=0,ans=0;
	int minn=INT_MAX;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			if(sum+a[i]>=0)
			{
				minn=min(minn,a[i]);
				sum+=a[i]; 
				ans++;
			}
			else
			{
				if(sum-minn+a[i]>=0)
				{
					sum=sum-minn+a[i];
					minn=a[i];
				}
			}
		}
		else
		{
			sum+=a[i]; 
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}