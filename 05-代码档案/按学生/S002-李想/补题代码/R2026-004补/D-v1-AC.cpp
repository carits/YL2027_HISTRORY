#include<bits/stdc++.h>
using namespace std;

int t,n,ct;
int const N=2e5+5;
int a[N]; 
void slove(){
	int ct=0;
	cin>> n;
	for(int i=1;i<=n;i++){
		cin>> a[i];
		if(a[i]%5==0)ct++;
		while(a[i]%10!=2&&a[i]%10!=0)a[i]+=(a[i]%10);
	}
	if(ct>=1&&ct<=n-1){
		cout<< "No\n";
		return;
	}
	if(ct==0){
		for(int i=1;i<=n;i++){
			a[i]%=20;
		}
	}
	for(int i=2;i<=n;i++){
		if(a[i-1]!=a[i]){
			cout<< "No\n";
			return;
		}
	}
	cout<< "Yes\n";
}
int main(){
	cin>> t;
	while(t--)slove();
	return 0;
}