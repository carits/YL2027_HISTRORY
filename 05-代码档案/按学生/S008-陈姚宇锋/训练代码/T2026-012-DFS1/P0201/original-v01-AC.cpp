  #include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int vis[1000009];
int a[1000009];
int xi[1009][1009];
int cnt=0;
void dfs(int cur)
{
	if(cur==n+1)
	{
		cnt++;
		return ;
	}
	for(int i=1;i<=n;++i)
	{
		if(vis[i]==0 && xi[i][cur]!=0)
		{	
			vis[i]=1;
			a[cur]=i;
			dfs(cur+1);
			vis[i]=0;
		}
	}
	return ;
}
signed main()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		int x;
		int y;
		cin>>x>>y;
		xi[x][i]=1;
		xi[y][i]=1;
	}
	dfs(1);
	cout<<cnt;
	return 0;
}