#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		int maxn=0;
		cin>>n;
		int a[n+1]={};
		for(int j=1;j<=n;j++){
			cin>>a[j];
			maxn=max(maxn,a[j]);
		}
		sort(a+1,a+n+1);
		bool f=true;
		long long l=1;
		for(int j=1;j<=n-1;j++){
			if(a[j]==a[j-1]||a[j]==1){
				break;
			}
			bool r=true;
			for(int k=1;k<=n-1;k++){
				if(a[j]*maxn%a[k]!=0){
					r=false;
					break;
				}
			}
			if(r){
				l=a[j]*maxn;
				f=false;
				break;
			}
		}
		if(f){
			if(n==1){
				cout<<a[1]*a[1]<<endl;
			}else{
				cout<<"-1"<<endl;
			}
		}else{
			cout<<l<<endl;
		}
	}
	return 0;
}