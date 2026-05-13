#include<bits/stdc++.h>
using namespace std;
int n,m;
int s;
int a[21][21];
int l[21*21][2];
int sx,sy,ex,ey;
int d[][2]={{0,-1},{-1,0},{0,1},{1,0}};
void dfs(int x,int y,int t){
	if(!a[x][y]){
		return;	
	} 
	if(x==ex&&y==ey){
		s=1;
		for (int i=1;i<t;i++){
			cout<<"("<<l[i][0]<<","<<l[i][1]<<")->";
		}
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
	l[t][0]=x;
	l[t][1]=y;
	a[x][y]=0;
	for (int i=0;i<4;i++){
		dfs(x+d[i][0],y+d[i][1],t+1);	
	}
	a[x][y]=1;
}
int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];	
		}
	}
	cin>>sx>>sy>>ex>>ey;
	dfs(sx,sy,1);
	if(!s){
		cout<<"-1";
	}
	return 0;
}