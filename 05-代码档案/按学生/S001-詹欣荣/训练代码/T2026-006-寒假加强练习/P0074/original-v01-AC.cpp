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
		for(int j=1;j<=n;j++){
			cin>>a[j];
		}
		if(a[n]!=-1&&a[1]==-1){
			a[1]=a[n];
		}else if(a[1]!=-1&&a[n]==-1){
			a[n]=a[1];
		}if(a[1]==-1&&a[n]==-1){
			a[n]=0;
			a[1]=0;
		}
		for(int j=2;j<=n-1;j++){
			if(a[j]==-1){
				a[j]=0;
			}
		}
		int cnt=0;
		for(int j=2;j<=n;j++){
			cnt+=a[j]-a[j-1];
		}
		cout<<abs(cnt)<<endl;
		for(int j=1;j<=n;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}