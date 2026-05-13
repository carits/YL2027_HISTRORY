#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n,q;
		cin>>n>>q;
		int a[n+1]={};
		int b[n+1]={};
		int ans[n+1]={};
		for(int j=1;j<=n;j++){
			cin>>a[j];
		}
		for(int j=1;j<=n;j++){
			cin>>b[j];
		}
		for(int j=1;j<=n;j++){
			a[j]=max(a[j],b[j]);
		}
		for(int j=n-1;j>=1;j--){
			a[j]=max(a[j+1],a[j]);
		}
		for(int j=1;j<=n;j++){
			ans[j]=ans[j-1]+a[j];
		}
		for(int j=1;j<=q;j++){
			int l,r;
			cin>>l>>r;
			cout<<ans[r]-ans[l-1]<<" ";
		}
		cout<<endl;
	}
	return 0;
}