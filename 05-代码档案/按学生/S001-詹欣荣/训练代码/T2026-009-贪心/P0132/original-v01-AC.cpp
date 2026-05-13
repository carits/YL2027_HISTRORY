#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	ll t;
	cin>>t;
	int a[1005];
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n*2;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+n+1);
		cout<<a[n*2]-a[n+1]+a[n]-a[1]<<'\n';
		for(int i=1;i<=n;i++){
			cout<<a[n+i]<<" "<<a[i]<<'\n';
		}
	}
	return 0;
}