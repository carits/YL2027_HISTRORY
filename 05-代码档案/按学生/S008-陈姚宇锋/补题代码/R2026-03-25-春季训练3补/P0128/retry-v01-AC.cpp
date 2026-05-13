#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[1000009],ans=LONG_LONG_MAX; 
signed main()
{
	cin>>n;
	for(int i=1;i<=n;i++)	
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;;i++)
    {
		int sum=0,num=1;
		for(int j=1;j<=n;j++)
		{
			if(abs(num)>1e14)
			{
				num=-1; 
			} 
			sum+=abs(num-a[j]);
            num*=i;
		}
		if(ans>sum && num>0)
		{
			ans=min(ans,sum);
		}
		else
		{
			break;
		}
	}  
	cout<<ans<<"\n";
	return 0;
}