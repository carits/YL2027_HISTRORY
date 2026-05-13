#include<bits/stdc++.h>
using namespace std;

int n;
map<int,int>vis;
bool pr(int x){
	if(x==1)return 0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)return 0;
	}
	return 1;
}
void dfs(int i,int as){
	if(i==n+1){
		cout<< as << "\n";
		return;
	}
	for(int j=1;j<=9;j++){
		if(vis[as*10+j])continue;
		if(pr(as*10+j)){
			vis[as*10+j]=1;
			dfs(i+1,as*10+j);
		}
	}
}
int main(){
	cin>> n;
	dfs(1,0);
	return 0;
}