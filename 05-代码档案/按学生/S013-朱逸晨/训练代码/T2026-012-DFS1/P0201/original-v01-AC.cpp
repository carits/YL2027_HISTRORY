#include<bits/stdc++.h>
using namespace std;
int n,a[25][2],sum;
bool b[25];
void dfs(int i){
	if(i>n){
		sum++;
		return;
	}
	for(int j=0;j<2;j++){
		if(!b[a[i][j]]){
			b[a[i][j]]=1;
			dfs(i+1);
			b[a[i][j]]=0;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i][0]>>a[i][1];
	}
	dfs(1);
	cout<<sum;
	return 0;
}