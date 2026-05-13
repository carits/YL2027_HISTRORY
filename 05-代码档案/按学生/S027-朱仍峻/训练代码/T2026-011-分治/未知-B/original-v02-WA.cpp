#include <bits/stdc++.h>
using namespace std;
long long a,x,m;
long long mul(long long a,long long b,long long mod){
	long long res=0;
	while(b){
		if(b&1)res=(res+a)%mod;
		a=(a+a)%mod;
		b>>=1;
	}
	return res;
}
long long qpow(long long a,long long b,long long mod){
	long long res=1;
	a=(a%mod+mod)%mod;
	a%=mod;
	while(b){
		if(b&1)res=mul(res,a,mod);
		a=mul(a,a,mod);
		b>>=1;
	}
	return res;
}
long long solve(long long a,long long x,long long m){
	if(x==0)return 0;
	if(x==1)return (a%m+m)%m;
	if(x%2==0){
		long long k=x/2;
		long long s=solve(a,k,m);
		long long p=qpow(a,k,m);
		return (s+mul(s,p,m))%m;
	}
	return (solve(a,x-1,m)+qpow(a,x,m))%m;
}
int main(){
	cin>>a>>x>>m;
	cout<<solve(a,x,m);
	return 0;
}