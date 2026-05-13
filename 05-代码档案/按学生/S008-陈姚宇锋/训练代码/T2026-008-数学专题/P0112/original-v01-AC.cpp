#include <bits/stdc++.h>
using namespace std;
#define int long long
int vis[100010];
map<int,int>op;
void aishishai(int x)
{
	vis[1]=vis[0]=1;
	for(int i=2;i<=x;++i)
	{
		if(vis[i]==0)
		{
			for(int j=i+i;j<=x;j+=i)
			{
				vis[j]=1;
			}
		}
	}
	return ;	
}
signed main()
{
	std::ios::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	aishishai(100009);
	for(int i=2;i<=n;++i)
	{
		if(vis[i]==1)
		{
			continue;
		} 
		int flag=0;
		for(int j=2;j<=i;++j)
		{
			if(vis[j]==0)
			{
				for(int k1=j+1;k1<=i;++k1)
				{
					if(vis[k1]==0)
					{
						if(j+k1+1==i)
						{
							k-=1;
							flag=1;	
						}	
						break;		
					}
				}
				if(flag==1)
				{
					break;
				}					
			}	
		}				
	}
	if(k<=0)
	{
		cout<<"YES";
	}		
	else
	{
		cout<<"NO";
	}
	return 0;
}