#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[100005],b[100005],g[100005],k[100005],jx,jy;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>jy>>jx;
	for(int i=n;i>=1;i--){
		if(jx>=b[i]&&jx<=b[i]+k[i]&&jy>=a[i]&&jy<=a[i]+g[i]){
			cout<<i;
			return 0;
		}
	} 
	cout<<"-1";
	return 0;
} 