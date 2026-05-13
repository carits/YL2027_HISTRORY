#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t,s,k,m;
signed main(){
	cin>>t;
	while(t--){
		cin>>s>>k>>m;
		if(s<=k)cout<<max(0ll,s-m%k)<<'\n';
		else{
			if(m/k&1)cout<<max(0ll,k-m%k)<<'\n';
			else cout<<max(0ll,s-m%k)<<'\n';
		}
	}
	return 0;
}