#include<bits/stdc++.h>
using namespace std;
int n,m;
int s;
int a[20][20];
map<int,bool> mp;
void dfs(int x,int y){
	if(x==n&&y==m){
		s++;
		return;
	}
	if(x<n){
		if(mp.find(a[x+1][y])==mp.end()){
			mp[a[x+1][y]]=1;
			dfs(x+1,y);
			mp.erase(a[x+1][y]);
		}	
	}
	if(y<m){
		if(mp.find(a[x][y+1])==mp.end()){
			mp[a[x][y+1]]=1;
			dfs(x,y+1);
			mp.erase(a[x][y+1]);
		}	
	}
}
int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	mp[a[1][1]]=1;
	dfs(1,1);
	cout<<s;
	return 0;
}