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
		int cnt=0;
		int num=i;
		for(int j=2;j<=n;++j)
		{
			if(vis[j]==0 && num%j==0)
			{
				cnt++;
			}
		} 
		if(cnt==2)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}