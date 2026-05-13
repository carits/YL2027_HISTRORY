#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	ll t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string x,s;
		cin>>x>>s;
		ll cnt=0;
		bool b=true;
		while(n<m*2||cnt<=2){
			for(int i=0;i<=n-m;i++){
				string h=x.substr(i,m);
				if(h==s){
					cout<<cnt<<'\n';
					b=false;
					break;
				}
			}
			if(!b){
				break;
			}
			n*=2;
			cnt++;
			x=x+x;
		}
		if(b){
			for(int i=0;i<=n-m;i++){
				string h=x.substr(i,m);
				if(h==s){
					cout<<cnt<<'\n';
					b=false;
					break;
				}
			}
		}
		if(b){
			cout<<-1<<'\n';
		}
	}
	return 0;
}