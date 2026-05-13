#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t,n,q,pre[1005][1005];
void solve(){
	memset(pre,0,sizeof(pre));
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		int h,w;
		cin>>h>>w;
		pre[h][w]+=h*w;
	}
	for(int i=1;i<=1000;i++){
		for(int j=1;j<=1000;j++){
			pre[i][j]+=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
		}
	}
	while(q--){
		int xs,ys,xx,yx;
		cin>>xs>>ys>>xx>>yx;
		xs++;ys++;xx--;yx--;
		cout<<pre[xx][yx]-pre[xs-1][yx]-pre[xx][ys-1]+pre[xs-1][ys-1]<<"\n";
	}
}
signed main(){
	cin>>t;
	while(t--) solve();
}