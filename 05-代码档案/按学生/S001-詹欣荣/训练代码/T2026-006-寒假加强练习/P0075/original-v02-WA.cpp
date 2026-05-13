#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n,maxn=0;
		cin>>n;
		int a[n+1]={};
		for(int j=1;j<=n;j++){
			cin>>a[j];
		}
		for(int j=1;j<=n-1;j++){
			maxn=max(maxn,a[j]);
		}
		cout<<maxn<<endl;
	}
	return 0;
}