#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[100009][109];
int x[100009];
signed main() 
{
  	freopen("plan.in", "r", stdin);
  	freopen("plan.out", "w", stdout);
 	int n,m,k;
 	cin>>n>>m>>k;
 	for(int i=1;i<=n;++i)
	{ 	
		cin>>x[i];
		for(int j=1;j<=x[i];++j)
		{
			cin>>a[i][j];
		}
	} 
	int maxx=0;
	for(int i=1;i<=n;++i)
	{
		for(int j=i;j<=n;++j)
		{
			int flag=0;
			for(int k1=i;k1<=j;++k1)
			{
				
				for(int l=k1+1;l<=j;++l)
				{
					int nu=0;
					if(x[k1]==0 || x[l]==0)
					{
						flag++;
						continue;
					}
					for(int h=1;h<=x[k1];++h)
					{
						for(int h2=1;h2<=x[l];++h2)
						{
							if(a[k1][h]==a[l][h2])
							{
								nu=1;
							}
						}
					}
					if(nu==0)
					{
						flag++;
					}
				}
			}
			if(flag>=k)
			{
				break;
			}
			
			maxx=max(maxx,j-i+1);
		}
	}
	cout<<maxx<<endl;
  	return 0;
}
