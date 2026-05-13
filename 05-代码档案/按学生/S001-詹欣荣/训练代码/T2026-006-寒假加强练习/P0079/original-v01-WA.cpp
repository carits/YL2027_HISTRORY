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
		for(int j=1;j<=n;j++){
			int h=a[j]%3;
			int x=3-h;
			if(x<3){
				x+=3;
			}
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}