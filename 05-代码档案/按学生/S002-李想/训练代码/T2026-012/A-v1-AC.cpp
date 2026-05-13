#include<bits/stdc++.h>
using namespace std;

int n,ans;
int const N=2e5+5;
int a[N][3],vis[N];
void dfs(int i){
	if(i==n+1){
		ans++;
		return;
	}
	for(int j=1;j<=2;j++){
		if(vis[a[i][j]])continue;
		vis[a[i][j]]=1;
		dfs(i+1);
		vis[a[i][j]]=0;
	}
}
int main(){
	cin>> n;
	for(int i=1;i<=n;i++)cin>> a[i][1] >> a[i][2];
	dfs(1);
	cout<< ans; 
	return 0;
}