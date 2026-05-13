#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[1000009],ans=INT_MAX;
signed main()
{
	cin>>n;
	for(int i=1;i<=n;i++)	
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=1000009;i++)
    {
		int sum=0,num=1;
		for(int j=1;j<=n;j++)
		{
			sum+=abs(num-a[j]);
            num*=i;
		}
		ans=min(ans,sum);
	}  
	cout<<ans<<endl;
	return 0;
}