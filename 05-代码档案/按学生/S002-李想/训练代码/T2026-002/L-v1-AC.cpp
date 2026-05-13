#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=2e5+5;
int a[N],b[N];
int main(){
	cin>> t;
	while(t--){
		cin>> n;
		for(int i=1;i<=n;i++)cin>> a[i];
		for(int i=1;i<=n;i++)b[i]=a[i];
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++){
			if(b[i]==a[n]){
				cout<< b[i]-a[n-1];
			}else{
				cout<< b[i]-a[n];
			}
			cout<< " ";
		}
		cout<< "\n";
	}
	return 0;
}