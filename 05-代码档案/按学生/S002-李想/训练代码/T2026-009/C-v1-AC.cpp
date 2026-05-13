#include<bits/stdc++.h>
using namespace std;

int t,n,k;
int const N=105;
int a[N];
void slove(){
	cin>> n >> k;
	int sum[N]={};
	for(int i=1;i<=n;i++)cin>> a[i];
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+(a[i]==k);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if((sum[j]-sum[i-1])>=ceil(1.0*(j-i+1)/2)){
				cout<< "Yes\n";
				return;
			}
		}
	}
	cout<< "No\n";
}
int main(){
	cin>> t;
	while(t--)slove();
	return 0;
}