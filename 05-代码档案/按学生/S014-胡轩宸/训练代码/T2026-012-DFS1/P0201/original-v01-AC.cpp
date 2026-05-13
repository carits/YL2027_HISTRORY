#include <bits/stdc++.h>
using namespace std;
int ans[10005],vis[10005],like1[10005],like2[10005],n,total=0;
void dfs(int x)
{
	if(x>n)
	{
		total++;
	
	return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i] == 0&& (like1[x]==i|| like2[x]==i))
		{
			ans[x]=i;
			vis[i]=1;
			dfs(x+1);
			ans[x]=0;
			vis[i]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>like1[i]>>like2[i];
	}
	dfs(1);
	cout<<total;
	return 0;
}
