#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int T=1;T<=t;T++){
		int a[200005]={};
		int n;
		int maxn=0,mmaxn=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]>maxn){
				mmaxn=max(maxn,mmaxn);
				maxn=a[i];
			}else if(a[i]>mmaxn){
				mmaxn=a[i];
			}
		}
		for(int i=1;i<=n;i++){
			if(a[i]==maxn){
				cout<<a[i]-mmaxn;
			}else{
				cout<<a[i]-maxn;
			}
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}