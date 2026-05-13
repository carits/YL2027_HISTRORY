#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
int const N=1e3+5;
int a[N][N];
int dx[]={0,0,1};
int dy[]={0,1,0};
map<int,int>mp;
void dfs(int x,int y){
	if(x==n&&y==m){
		ans++;
		return;
	}
	for(int i=1;i<=4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(nx<1||nx>n||ny<1||ny>m||mp[a[nx][ny]])continue;
		mp[a[nx][ny]]=1;
		dfs(nx,ny);
		mp[a[nx][ny]]=0;
	}
}
int main(){
	cin>> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>> a[i][j];
		}
	}
	mp[a[1][1]]=1;
	dfs(1,1);
	cout<< ans;
	return 0;
}