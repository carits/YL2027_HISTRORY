#include<bits/stdc++.h>
using namespace std;
#define int long long
long long ksm(int a,int b,int p){
	long long ans=1;
	while(b){
		if(b&1)ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
int f(int a,int b,int p){
	if(b==1) return 1%p;
	int t=f(a,b/2,p),ans=0;
	if(b&1) ans=t%p+ksm(a,b/2,p)%p+ksm(a,b/2+1,p)*t%p;
	else ans=t+ksm(a,b/2,p)*t%p;
	return ans%p;
}
signed main(){
	int a,b,p;
	cin>>a>>b>>p;
	cout<<f(a,b,p);
	return 0;
 }