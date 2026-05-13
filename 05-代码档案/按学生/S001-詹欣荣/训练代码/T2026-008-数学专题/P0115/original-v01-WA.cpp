#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100005];
	int n;
	cin>>n;
	int i=2;
	int cnt=0;
	while(i<=n){
		bool b=true;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				b=false;
				break;
			}
		}
		if(b){
			cnt++;
			a[cnt]=i;
		}
		i++;
	}
	int ans=0;
	for(int k=1;k<=n;k++){
		for(int i=1;i<=cnt;i++){
			bool b=false;
			for(int j=1;j<i;j++){
				if(a[i]*a[j]==k){
					ans++;
					b=true;
					break;
				}
			}
			if(b){
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}