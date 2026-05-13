#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		int b[n+1];
		int c[n+1];
		//cout<<b[1]<<" "<<c[1]<<"m\n";
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=0;
			c[i]=0;
		}
		if(n==1){
			cout<<0<<'\n';
			continue;
		}
		//cout<<b[1]<<" "<<c[1]<<"m\n";
		int cnt=0;
		cnt++;
		b[cnt]=1;
		c[cnt]=n;
		//cout<<b[1]<<" "<<c[cnt]<<"m\n";
		if((a[1]+a[n])%2==0){
			a[1]=a[n];
		}else{
			a[n]=a[1];
		}
		for(int i=2;i<n;i++){
			if((a[i]+a[1])%2==0){
				cnt++;
				b[cnt]=i;
				c[cnt]=n;
			}else{
				cnt++;
				b[cnt]=1;
				c[cnt]=i;
			}
		}
		cout<<cnt<<'\n';
		for(int i=1;i<=cnt;i++){
			cout<<b[i]<<" "<<c[i]<<'\n';
		}
	}
}