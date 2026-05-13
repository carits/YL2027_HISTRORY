#include<bits/stdc++.h>
#define int long long
using namespace std; 
int n,m,cnt;
int qx,qy,zx,zy,vis[1005][1005];
int fx[100005],fy[100005];
int a[1005][1005];
int dx[]={0,0,-1,0,1};
int dy[]={0,-1,0,1,0};
bool f;
void dfs(int x,int y){
	if(x==zx&&y==zy){
		f=1;
		cout<<'('<<qx<<','<<qy<<')'<<"->";
		cout<<'('<<fx[1]<<','<<fy[1]<<')';
		for(int i=2;i<cnt;i++){
			cout<<"->"<<'('<<fx[i]<<','<<fy[i]<<')';
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&ny>=1&&nx<=n&&ny<=m&&a[nx][ny]==1&&vis[nx][ny]==0){
			vis[nx][ny]=1;
			fx[cnt]=nx;
			fy[cnt]=ny;
			cnt++;
			dfs(nx,ny);
			vis[nx][ny]=0;
			fx[cnt]=0;
			fy[cnt]=0;
			cnt--;
		}
	}
}
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	cin>>qx>>qy>>zx>>zy;
	cnt++;
	vis[qx][qy]=1;
	fx[cnt]=qx;
	fy[cnt]=qy;
	dfs(qx,qy);
	if(f==0) cout<<-1;
	return 0;
}