#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[20][20],ex,ey,fx,fy,vis[20][20],wc=0;

struct Node
{
	int x,y;
}q[400];
void dfs(int x,int y,int step)
{
	if(x==fx and y==fy)
	{
		for(int i=0;i<=step-1;i++)
		{
			cout<<"("<<q[i].x<<","<<q[i].y<<")->";
		}
		cout<<"("<<fx<<","<<fy<<")"<<endl;
        wc=1;
		return;
	}
	
	if(x<1 or x>n or y>m or y<1)
	{
		return;
	}
	if(vis[x][y]==1)
	{
		return;
	}
	if(a[x][y]==0)
	{
		return;
	}
	
	vis[x][y]=1;
	q[step]={x,y};
    dfs(x,y-1,step+1);
    dfs(x-1,y,step+1);
    dfs(x,y+1,step+1);
	dfs(x+1,y,step+1);
	vis[x][y]=0;
}
signed main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>ex>>ey;
	cin>>fx>>fy;
	dfs(ex,ey,0);
    if(wc==0)
    {
        cout<<-1;
    }
	return 0;
}
