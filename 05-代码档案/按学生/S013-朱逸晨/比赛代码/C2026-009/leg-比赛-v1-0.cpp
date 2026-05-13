#include<bits/stdc++.h>
using namespace std;
int dx[2]={0,-1};
int dy[2]={-1,0};
long long n,m,a,b,c,d;
long long dfs(long long x,long long y){
	if(x==0&&y==0){
		return 0;
	}
	long long minn=1000000000000000000LL;
	for(int i=0;i<2;i++){
		long long nx=x+dx[i],ny=y+dy[i];
		if(nx<0||ny<0||nx>n||ny>m){
			continue;
		}
		long long now=dfs(nx,ny);
		if((nx+ny)&1){
			if(i&1){
				now+=c;
			}else{
				now+=d;
			}
		}else{
			if(i&1){
				now+=a;
			}else{
				now+=b;
			}
		}
		minn=min(minn,now);
	}
//	cout<<x<<" "<<y<<" "<<minn<<"\n";
	return minn;
}
int main(){
	freopen("leg.in","r",stdin);
	freopen("leg.out","w",stdout);
	cin>>n>>m>>a>>b>>c>>d;
	cout<<dfs(n,m);
	return 0;
}
