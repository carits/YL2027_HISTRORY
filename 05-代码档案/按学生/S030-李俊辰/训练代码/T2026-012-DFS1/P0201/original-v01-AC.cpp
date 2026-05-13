#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
#define qwq ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
int a[25][2],b[25],n,sum;
void dfs(int i){
	if(i>=n){
		sum++;
		return ;
	}
	for(int j=0;j<=1;j++){
		if(!b[a[i][j]]){
			b[a[i][j]]=1;
			dfs(i+1);
			b[a[i][j]]=0;
		}
	}
}
signed main(){
	qwq;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
	}
	dfs(0);
	cout<<sum;
	return 0;
}