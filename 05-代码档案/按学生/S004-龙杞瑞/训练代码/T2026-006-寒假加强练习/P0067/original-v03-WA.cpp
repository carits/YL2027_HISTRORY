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
		else if(n==3) cout<<1<<'\n';
		else cout<<min(n%2,n%3)<<'\n';
	}
	return 0;
}