#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=1e5+5;
int a[N];
void slove(){
	cin>> n;
	for(int i=1;i<=n;i++)cin>> a[i];
	bool p=0;
	for(int i=1;i<n;i++){
		if(a[i]>=a[i+1])p=1;
	}
	if(!p){
		cout<< "Bob\n";
		return;
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=sqrt(a[i]);j++){
			if(a[i]%j==0){
				while(a[i]%j==0){
					a[i]/=j;
				}
				if(a[i]!=1){
					cout<< "Alice\n";
					return;
				}else{
					a[i]=j;
				}
				break;
			}
		}
	}
	p=0;
	for(int i=1;i<n;i++){
		if(a[i]>=a[i+1])p=1;
	}
	if(!p){
		cout<< "Bob\n";
		return;
	}
	cout<< "Alice\n";
}
int main(){
	cin>> t;
	while(t--)slove();
	return 0;
}