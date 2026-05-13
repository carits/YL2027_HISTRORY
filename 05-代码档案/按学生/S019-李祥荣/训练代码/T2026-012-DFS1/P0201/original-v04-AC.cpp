#include<bits/stdc++.h>
using namespace std;
int n,a[110],b[110],v[110],ans=0;
void dfs(int x){
	if(x==n+1){
		ans++;
		return;
	}
	if(!v[a[x]]){
		v[a[x]]=1;
		dfs(x+1);
		v[a[x]]=0;
	}
	if(!v[b[x]]){
		v[b[x]]=1;
		dfs(x+1);
		v[b[x]]=0;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	dfs(1);
	cout<<ans;
	
	return 0;
}