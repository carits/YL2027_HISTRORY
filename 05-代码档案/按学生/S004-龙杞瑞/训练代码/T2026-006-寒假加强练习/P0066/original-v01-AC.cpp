#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int t,n,q,a[N],b[N],pre[N],sub[N];
void solve(){
	memset(sub,0,sizeof(sub));
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=n;i>=1;i--) sub[i]=max(sub[i+1],max(b[i],a[i]));
	for(int i=1;i<=n;i++) pre[i]=pre[i-1]+sub[i];
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<pre[r]-pre[l-1]<<" ";
	}
	cout<<'\n';
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>t;
	while(t--) solve();
	return 0;
}