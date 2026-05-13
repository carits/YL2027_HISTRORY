#include<bits/stdc++.h>
using namespace std;
int a[5000][5];
int vis[5000];
int n,ans=0;
void dfs(int cur)
{
	if(cur==n+1)
	{
		ans++;
		return;
	}
	if(!vis[a[cur][1]])
	{
		vis[a[cur][1]]=1;
		dfs(cur+1);
		vis[a[cur][1]]=0;
	}
	if(!vis[a[cur][2]])
	{
		vis[a[cur][2]]=1;
		dfs(cur+1);
		vis[a[cur][2]]=0;
	}
}
int main()
{
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		cin>>a[i][1]>>a[i][2];
	}
	dfs(1);
	cout<<ans;
	return 0;
}
