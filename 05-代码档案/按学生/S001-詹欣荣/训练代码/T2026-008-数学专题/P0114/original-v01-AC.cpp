#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int main(){
	int t;
	cin>>t;
	a[1]=1;
	b[1]=1;
	for(int i=2;i<=1000;i++){
		b[i]=b[i-1]*2;
	}
	for(int i=2;i<=1000;i++){
		a[i]=a[i-1]+b[i-1]*2;
	}
	while(t--){
		int n;
		cin>>n;
		int j=2;
		while(1){
			//cout<<n%a[j]<<" ";
			if((n%a[j])==0){
				break;
			}
			j++;
		}
		cout<<n/a[j]<<'\n';
	}
	return 0;
}