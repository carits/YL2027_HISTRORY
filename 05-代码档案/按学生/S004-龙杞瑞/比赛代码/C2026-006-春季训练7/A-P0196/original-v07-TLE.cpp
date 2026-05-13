#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int t,n,cnt,ans[N],vis[N];
void dfs(int x){
	if(x>n){
		if(cnt<n){
		    cnt++;
		    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
		    cout<<'\n';
		}
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]&&i!=ans[x-1]+ans[x-2]){
			ans[x]=i,vis[i]=1;
			dfs(x+1);
			ans[x]=0,vis[i]=0;
		}
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n;
        dfs(1);
    }
    return 0;
}