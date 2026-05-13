#include<bits/stdc++.h>
using namespace std;
int n,m,a[20][20],sx,sy,ex,ey,v[20][20],d[4][2]={{0,-1},{-1,0},{0,1},{1,0}},rec[1010][2],ans=0,k=0;
void dfs(int x,int y,int step){
	if(x==ex&&y==ey){
		ans=1;
		for(int i=0;i<step;i++){
			if(i!=step-1) printf("(%d,%d)->",rec[i][0],rec[i][1]);
			else printf("(%d,%d)",rec[i][0],rec[i][1]);
		}
		printf("\n");
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+d[i][0],ny=y+d[i][1];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&v[nx][ny]==0&&a[nx][ny]==1){
			v[nx][ny]=1;
			rec[step][0]=nx;rec[step][1]=ny;
			dfs(nx,ny,step+1);
			v[nx][ny]=0;
		}
	} 
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++) cin>>a[i][j];
	cin>>sx>>sy>>ex>>ey;
	rec[0][0]=sx;rec[0][1]=sy;
	dfs(sx,sy,1);
	if(ans==0) cout<<-1;
	
	return 0;
}
