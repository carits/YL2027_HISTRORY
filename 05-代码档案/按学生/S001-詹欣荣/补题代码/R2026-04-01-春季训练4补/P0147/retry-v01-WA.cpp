#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		int x=-1;
		bool b=false;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			while(a[i]%10!=0&&a[i]%10!=2){
				a[i]=a[i]+a[i]%10;
			}
			if(x==-1){
				x=a[i]%10;
			}
			else if(a[i]%10!=x){
				b=true;
				break;
			}
		}
		if(b){
			cout<<"NO"<<'\n';
			continue;
		}
		if(x==2){
			for(int i=2;i<=n;i++){
				if(abs(a[i]-a[1])%20!=0){
					b=true;
					break;
				}
			}
			if(b){
				cout<<"NO"<<'\n';
			}else{
				cout<<"YES"<<'\n';
			}
			continue;
		}
		else{
			for(int i=2;i<=n;i++){
				if(a[i]!=a[1]){
					b=true;
					break;
				}
			}
			if(b){
				cout<<"NO"<<'\n';
			}else{
				cout<<"YES"<<'\n';
			}
			continue;
		}
	}
    return 0;
}