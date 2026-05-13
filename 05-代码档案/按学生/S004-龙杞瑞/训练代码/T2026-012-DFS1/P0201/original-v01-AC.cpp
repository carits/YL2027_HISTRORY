#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=25;
int x,n,a[N],b[N],ans[N],vis[N],cnt;
void dfs(int x){
	if(x>n){
		cnt++;
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0&&(i==a[x]||i==b[x])){
			ans[x]=i;
			vis[i]=1;
			dfs(x+1);
			ans[x]=0;
			vis[i]=0;
		}
	}
}
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	dfs(1);
	cout<<cnt;
	return 0;
} 