#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100005];
	int t;
	cin>>t;
	while(t--){
		int m;
		cin>>m;
		int a[m+1];
		int cnt=0;
		for(int i=1;i<=m;i++){
			cin>>a[i];
			for(int j=1;j<i;j++){
				if(a[i]*a[j]==i+j){
					cnt++;
				}
			}
		}
		cout<<cnt<<'\n';
	}
	return 0;
}