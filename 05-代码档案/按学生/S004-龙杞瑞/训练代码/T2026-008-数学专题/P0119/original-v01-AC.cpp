#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,p,q;
int solve(int p,int q,int c){
	while(p%q==0) p/=c;
	return p;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		cin>>p>>q;
		if(p%q!=0){
			cout<<p<<'\n';
			continue;
		}
		int ans=1,qq=q;
		for(int i=2;i*i<=qq;i++){
			if(qq%i==0){
				ans=max(ans,solve(p,q,i));
				while(qq%i==0) qq/=i;
			}
		}
		if(qq>1) ans=max(ans,solve(p,q,qq));
		cout<<ans<<'\n';
	}
	return 0;
}