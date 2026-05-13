#include <bits/stdc++.h>
using namespace std;
#define int long long 
int cnt[100009];
char c[1000009];
int sum[1000009];
int diff[1000009];		
signed main()			
{			
	int t;		
	cin>>t;		
	while(t--)	
	{			
		memset(sum,0,sizeof(sum));
		int n;	
		cin>>n;		
		int ans=0;
		for(int i=0;i<n;++i)
		{   
			cin>>c[i];
			cnt[i+1]=c[i]-'0';
			diff[i+1]=diff[i]+cnt[i+1];
		}   
		sum[n]=1;
		for(int i=1;i<=n;++i)
		{
			sum[diff[i]-i+n]+=1; 
			ans+=sum[diff[i]-i+n]-1;			
		}
		cout<<ans<<endl;
	}	
	return 0;	
}