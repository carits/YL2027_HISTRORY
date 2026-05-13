#include<bits/stdc++.h>
using namespace std;
int dfs(int x,int ans,int step){
	int l=x/2;
	int r=x-l;
	if(l==ans||r==ans){
		return step;
	}if(l<ans||r<ans){
		return INT_MAX;
	}
	if(l==r){
		return dfs(l,ans,step+1);	
	}
	return min(dfs(l,ans,step+1),dfs(r,ans,step+1));
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,t;
		cin>>x>>t;
		int k=dfs(x,t,1);
		if(k==INT_MAX){
			cout<<-1<<endl;
		}else{
			cout<<k<<endl;
		}
	}
	return 0;
}