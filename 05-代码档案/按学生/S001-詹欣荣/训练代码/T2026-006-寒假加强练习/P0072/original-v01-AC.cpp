#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n,minn=INT_MAX;
		cin>>n;
		int a[n+1]={};
		for(int j=1;j<=n;j++){
			cin>>a[j];
			minn=min(a[j],minn);
		}
		int num=INT_MAX;
		for(int j=1;j<=n;j++){
			if(a[j]!=minn){
				num=min(num,a[j]);
			}
		}
		minn=max(minn,num-minn);
		cout<<minn<<endl;
	}
	return 0;
}