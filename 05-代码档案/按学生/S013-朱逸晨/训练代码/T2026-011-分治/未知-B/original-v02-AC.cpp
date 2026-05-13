#include<bits/stdc++.h>
using namespace std;
long long a,x,m;
long long POW(long long a,long long b){
	if(b==0){
		return 1;
	}
	long long pp=POW(a,b>>1);
	if(b&1){
		return a*pp%m*pp%m;
	}else{
		return pp*pp%m;
	}
}
long long f(long long a,long long x){
	if(x==1){
		return 1%m;
	}
	long long t=f(a,x>>1);
	if(x&1){
		long long p=POW(a,x>>1);
		return (t*(1+p*a%m)%m+p)%m;
	}else{
		long long p=POW(a,x>>1);
		return (1+p)*t%m;
	}
}
int main(){
	cin>>a>>x>>m;
	cout<<f(a,x);
	return 0;
}