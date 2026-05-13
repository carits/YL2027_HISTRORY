#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n;
int const N=2e5+5;
int a[N],x[N],y[N];
void slove(){
	cin>> n;
	n*=2; 
	for(int i=1;i<=n;i++)cin>> a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n/2;i++){
		x[i]=a[i];
	}
	for(int i=1;i<=n/2;i++){
		y[i]=a[i+(n/2)];
	}
	int ans=(a[n/2]-a[1])+(a[n]-a[n/2+1]);
	cout<< ans << "\n";
	for(int i=1;i<=n/2;i++)cout<< x[i] << " " << y[i] << "\n";
//	cout<< "\n";
}
signed main(){
	cin>> t;
	while(t--)slove();
	return 0;
}