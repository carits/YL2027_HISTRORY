#include<bits/stdc++.h>
using namespace std;
int a[25][2],n,ans;
bool vis[25]={};
void dfs(int i){
	if(i>=n){
		ans++;
		return;
	}
	for(int j=0;j<=1;j++){
		if(!vis[a[i][j]]){
			vis[a[i][j]]=1;
			dfs(i+1);
			vis[a[i][j]]=0; 
		}
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	dfs(0);
	cout<<ans;
	return 0;
} 