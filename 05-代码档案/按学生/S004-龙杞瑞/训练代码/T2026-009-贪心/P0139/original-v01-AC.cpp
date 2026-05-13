#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
int t,n,a,b,c;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--){
		int cnt=0;
		cin>>a>>b>>c;
		if(a>b) swap(a,b); 
		if(a==b){
			cout<<"0\n";
			continue;
		}
		while(a<b){
			b-=c,a+=c;
			cnt++;
			if(a==b) break;
		}
		cout<<cnt<<'\n';
	} 
	return 0;
}