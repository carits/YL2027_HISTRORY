#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
string s;
int n,maxn,a[N],ans[N],vis[N];
void dfs(int x){
	if(x>n){
		for(int i=1;i<n;i++){
			int l=0,r=0;
			for(int j=1;j<=i;j++) l=l*10+ans[j];
			for(int j=i+1;j<=n;j++) r=r*10+ans[j];
			maxn=max(maxn,l*r);
		}
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			ans[x]=a[i];
			vis[i]=1;
			dfs(x+1);
			ans[x]=0;
			vis[i]=0;
		}
	}
}
signed main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		int tmp=s[i]-'0';
		a[i+1]=tmp;
	}
	n=s.size(); 
	dfs(1);	
	cout<<maxn;
	return 0;
}