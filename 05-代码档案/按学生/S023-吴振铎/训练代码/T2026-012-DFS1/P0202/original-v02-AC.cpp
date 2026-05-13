#include<bits/stdc++.h>
using namespace std;
int sum[50000][2],ax,ay,bx,by,pd;
int d[4][2]={{0,-1},{-1,0},{0,1},{1,0}},vis[30][30],a[30][30];
void dfs(int x,int y,int k)
{
    if(x==bx&&y==by)
    {
    	pd=1; 
        for(int i=1;i<=k-1;i++)
	    cout<<"("<<sum[i][0]<<","<<sum[i][1]<<")"<<"->"; 
	    cout<<"("<<bx<<","<<by<<")"<<"\n";
        return;
    }
    else
    {
        for(int i=0;i<=3;i++)
        if(a[x+d[i][0]][y+d[i][1]]==1&&vis[x+d[i][0]][y+d[i][1]]==0)
        {
            vis[x][y]=1;
            sum[k][0]=x;
            sum[k][1]=y;
            dfs(x+d[i][0],y+d[i][1],k+1);
            vis[x][y]=0;
        }
    }
    return;
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    cin>>ax>>ay;
    cin>>bx>>by;
    dfs(ax,ay,1);
    if(pd==0)
    cout<<"-1";
    return 0;
}