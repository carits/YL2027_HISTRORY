#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=3e3+10;
int vis[maxn];
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
	int cnt=0;
	int n;
	cin>>n;	
	aishishai(3005);
	int flag=0;
	int sum=0;
	for(int i=2;i<=n;++i)
	{
		for(int j=2;j<=n;++j)
		{
			for(int k=j+1;k<=n;++k)
			{
				if(vis[j]==0 && vis[k]==0 && i%j==0 && i%k==0)
				{
					int num=i;
					while(num)
					{
						if(num%j==0)
						{
							num/=j;
						}
						else
						{
							break;
						}
					}
					while(num)
					{
						if(num%k==0)
						{
							num/=k;
						}
						else
						{
							break;
						}
					}
					if(num==1)
					{
						op[i]=1;
						sum++; 
					}
				}
			}
		}
	} 
	cout<<sum<<endl;
	return 0;
}