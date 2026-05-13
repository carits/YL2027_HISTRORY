#include <bits/stdc++.h>
using namespace std;
int x,a[25][5],vis[25],ans;
void dfs(int id){
	if(id==x+1){
		ans++;
	}
	for(int i=1;i<=2;i++){
		if(!vis[a[id][i]]){
			vis[a[id][i]]=1;
			dfs(id+1);
			vis[a[id][i]]=0;
		}
	}
	return;
}
int main(){
	cin>>x;
	for(int i=1;i<=x;i++){
		cin>>a[i][1]>>a[i][2];
	}
	dfs(1);
	cout<<ans;
	return 0;
}