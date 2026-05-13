#include <bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t){
t--
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<i<<' ';
			for(int j=n;j>0;j--){
				if(j!=i)cout<<j<<' ';
			}
			cout<<'\n';
		}
	}
	return 0;
}