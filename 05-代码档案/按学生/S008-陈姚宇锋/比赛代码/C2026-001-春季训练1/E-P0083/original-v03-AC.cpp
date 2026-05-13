#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[1009][1009];
signed main() 
{
    for(int i=0;i<=109;i++)
    {
        dp[i][0]=dp[i][i]=1;
        for(int j=1;j<i;j++) 
        {
            dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
        }
    }
    int t;
	cin>>t; 
	while(t--) 
	{
	    int n,k;
		cin>>n>>k;
    	int len=__lg(n),ans=0;
    	for(int i=1;i<=len-1;i++)
		{
        	for(int j=0;j<=i;j++)
			{
          	  	if(i+j+1>k) 
                {
                    ans+=dp[i][j];
                }
        	}
    	}
    	if(len+1>k) 
        {
            ans++;
        }
    	cout<<ans<<endl;
	}
	return 0;
}