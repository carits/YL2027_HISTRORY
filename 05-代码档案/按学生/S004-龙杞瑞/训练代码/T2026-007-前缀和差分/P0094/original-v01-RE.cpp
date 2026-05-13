#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5,M=1e5+5;
int t,n,pre[N],sub[N];
char a[N];
void solve(){
	int ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]+=(a[i]-'0')+pre[i-1],sub[pre[i-1]-i+1]++,ans+=sub[pre[i]-i];
	}
	for(int i=n;i>=1;i--) sub[pre[i-1]-i+1]=0,pre[i]=0;
	cout<<ans<<'\n';
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--) solve();
	return 0;
}