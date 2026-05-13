#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	for(int i=1;i<=t;i++){
		int n,k;
		cin>>n>>k;
		bool b=true;
		for(int j=1;j<=n;j++){
			int x=0;
			cin>>x;
			if(k==x&&b){
				cout<<"YES"<<'\n';
				b=false;
			}
		}
		if(b){
			cout<<"NO"<<'\n';
		}
	}
	
	return 0;
}