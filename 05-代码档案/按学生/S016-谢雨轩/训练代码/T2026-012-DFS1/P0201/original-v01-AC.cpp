#include<bits/stdc++.h>
using namespace std;
int n,m;
int s;
int a[20][2];
bool b[20];
void dfs(int x){
	if(x>=n){
		s++;
		return;	
	} 
	for (int j=0;j<=1;j++){
		if(!b[a[x][j]]){
			b[a[x][j]]=1;
			dfs(x+1);
			b[a[x][j]]=0;
		}	
	}
}
int main(){
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
	}
	dfs(0);
	cout<<s;
	return 0;
}