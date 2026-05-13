#include<bits/stdc++.h>
#define int long long
using namespace std;
int t;
signed main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			int o=n+1-a[i];
			cout<<o;
			if(i<n){
				cout<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}