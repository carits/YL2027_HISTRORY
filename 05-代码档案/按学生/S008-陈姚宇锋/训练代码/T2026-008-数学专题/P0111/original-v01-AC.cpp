#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e6+10;
int vis[maxn];
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
	aishishai(2000005);
	int flag=0;
	for(int i=2;i<=1e7+1;++i)
	{
		if(vis[i]==0)
		{
			cnt++;
			if(cnt>n)
			{
				flag=1;
				break;
			}
			cout<<i<<' ';
		}
	}
	return 0;
}