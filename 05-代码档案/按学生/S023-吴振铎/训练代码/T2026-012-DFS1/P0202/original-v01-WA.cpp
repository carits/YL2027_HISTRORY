#include<bits/stdc++.h>
using namespace std;
int n,m,vis[160][160];
char a[160][160];
int xx,yy;
int d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
struct node{
	int x,y;
}z[160][160];
queue<node> q;
int f(int x,int y)
{
	if(z[x][y].x==-1&&z[x][y].y==-1)
	{
		cout<<"("<<x<<","<<y<<")";
		return 0;
	}
	f(z[x][y].x,z[x][y].y);
	cout<<"->("<<x<<","<<y<<")";
	return 0;
}
int dfs(int x,int y)
{
	if(x==xx&&y==yy)
	{
		f(xx,yy);
		return 0;
	}
	for(int i=0;i<4;i++)
	{
		int dx=x+d[i][0];
		int dy=y+d[i][1];
		if(dx>=1&&dx<=n&&dy>=1&&dy<=m&&vis[dx][dy]==0&&a[dx][dy]==1)
		{
			vis[dx][dy]=1;
			dfs(dx,dy);
			vis[dx][dy]=0;
		} 
	}
	return 0;
}
int main()
{
	int x,y;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		cin>>a[i][j];
	}
	cin>>x>>y>>xx>>yy;
	dfs(x,y);
	return 0;
}