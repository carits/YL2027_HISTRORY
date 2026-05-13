#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int a[n+1]={};
		int b[n+1]={};
		for(int j=1;j<=n;j++){
			cin>>a[j];
			b[j]=n-a[j]+1;
		}
		for(int j=1;j<=n;j++){
			cout<<b[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}