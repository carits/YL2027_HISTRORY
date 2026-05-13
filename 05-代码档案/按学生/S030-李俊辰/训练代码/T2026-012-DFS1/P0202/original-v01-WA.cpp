#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define qwq ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
int d[4][2]={
	{0,-1},{1,0},{0,1},{-1,0}
};
int a[25][25],n,m,vis[25][25],qa,qb,za,zb,f;
vector<int>rx;
vector<int>ry;
void dfs(int x,int y){
	if(x==za && y==zb){
		for(int i=0;i<rx.size();i++){
			cout<<"("<<rx[i]<<","<<ry[i]<<")"<<"->";
		}
		f=1;
		cout<<"("<<za<<","<<zb<<")"<<endl;
		return ;
	}
	rx.push_back(x);
	ry.push_back(y);
	vis[x][y]=1;
	for(int i=0;i<4;i++){
		int nx=x+d[i][0],ny=y+d[i][1];
		if(nx<1 || nx>n || ny<1 || ny>m){
			continue;
		}
		if(a[nx][ny]==0 || vis[nx][ny]==1){
			continue;
		}
		dfs(nx,ny);
	}
	rx.pop_back();
	ry.pop_back();
	vis[x][y]=0;
}
signed main(){
	qwq;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	cin>>qa>>qb>>za>>zb;
	dfs(qa,qb);
	if(f==0){
		cout<<-1;
	}
	return 0;
}