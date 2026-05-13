#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e2+5;
int t,n,m,a[N][N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		int ans=0;
		cin>>n>>m;  
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) if(i==1||j==m) ans=__gcd(ans,a[i][j]);
		cout<<ans<<'\n';
	}
	return 0;
}