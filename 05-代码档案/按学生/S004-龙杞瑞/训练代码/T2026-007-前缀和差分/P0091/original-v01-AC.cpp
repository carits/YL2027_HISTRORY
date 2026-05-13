#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5; 
int n,m,l,r,a[N],pl[N],pr[N];
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i]; 
	for(int i=2;i<=n;i++){
		pl[i]=pl[i-1]+max(0ll,a[i-1]-a[i]);
		pr[i]=pr[i-1]+max(0ll,a[i]-a[i-1]);
	}
	while(m--){
		cin>>l>>r;
		if(l<r) cout<<pl[r]-pl[l]<<'\n';
		else cout<<pr[l]-pr[r]<<'\n';
	}	
}
signed main(){
	solve();
	return 0;
}