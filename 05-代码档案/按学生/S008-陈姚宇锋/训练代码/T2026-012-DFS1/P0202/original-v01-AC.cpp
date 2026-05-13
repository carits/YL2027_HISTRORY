#include <bits/stdc++.h>
using namespace std;
#define int long long 
int ans=0; 
struct stu
{
	int x,y;
}da[100009];
int n,m,sx,sy,ex,ey;
char a[1009][1009];
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};
int vis[1009][1009];
int flag=0;
void dfs(int x,int y,int num)
{
	if(x==ex && y==ey)
	{
        if(ans==0)
        {
            ans=1;
        }
		cout<<'('<<sx<<','<<sy<<")->";
		for(int i=1;i<=num;++i)
		{
			cout<<'('<<da[i].x<<','<<da[i].y<<')';
			if(i<num)
			{
				cout<<"->";
			}
		}
		cout<<endl;
		return ; 
	}
	for(int i=0;i<4;++i)
	{
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(xx>=1 && xx<=n && yy>=1 && yy<=m && vis[xx][yy]==0 && a[xx][yy]!='0')
		{
			vis[xx][yy]=1;
			da[num+1].x=xx;
			da[num+1].y=yy;
			dfs(xx,yy,num+1);
			vis[xx][yy]=0;
		}
	}
}
signed main()
{
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cin>>a[i][j];
		}
	}
	cin>>sx>>sy>>ex>>ey; 
	vis[sx][sy]=1;
	dfs(sx,sy,0);
    if(ans==0)
    {
        cout<<-1;
    }
	return 0;	
} 