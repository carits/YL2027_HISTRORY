#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[1000005]; 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		int ans=0;
		for(int l=1,r=n;l<=r;l++,r--){
			ans=__gcd(ans,abs(a[l]-a[r]));
		} 
		cout<<ans<<'\n';
	}			
	return 0;
}