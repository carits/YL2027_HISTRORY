#include<bits/stdc++.h>
#define int long long
using namespace std;
int t;
void solve(){
	int n;
	cin>>n;
	int ans=0;
	for (int i=0;i<n;i++) {
		int a,b;
		cin>>a>>b;
		if (a>b)ans++;
	}
	cout<<ans<<'\n';
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>t;
    while(t--) solve();
    return 0;
}