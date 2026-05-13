#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==2) cout<<2<<'\n';
		else if(n%2==1) cout<<1<<'\n';
		else cout<<0<<'\n'; 
	}
	return 0;
}