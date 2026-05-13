#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		bool f=true;
		int tt=t;
		int	pos=1,posl=1;
		for(int j=1;j<=t;j++){
			cin>>a[j];
			if(f&&a[j]==t-j+1){
				posl=j+1;
				tt--;
			}else{
				f=false;
			}
			if(a[j]==tt&&!f){
				pos=j;
			}
		}
		int k=pos;
		for(int j=posl;j<=pos;j++){
			b[k]=a[j];
			k--;
		}
		for(int j=posl;j<=pos;j++){
			a[j]=b[j];
		}
		for(int j=1;j<=t;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}