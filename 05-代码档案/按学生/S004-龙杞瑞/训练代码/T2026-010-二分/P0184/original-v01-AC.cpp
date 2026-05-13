#include<bits/stdc++.h>
#define int long long
using namespace std;
int q;
signed main(){
	cin>>q;
	while(q--){
		int a,b,c;
		cin>>a>>b>>c;
		cout<<min(min(a,b),(a+b+c)/3)<<'\n';
	}
	return 0;
}