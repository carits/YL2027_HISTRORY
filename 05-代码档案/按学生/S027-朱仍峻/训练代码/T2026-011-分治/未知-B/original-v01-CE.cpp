#include <bits/stdc++.h>
using namespace std;
long long a,x,m;
long long solve(long long a,long long x,long long m){
	if(x==1)return a%m;
	if(x%2==0){
		long long t=solve(a,x/2,m);
		return t*(1+qpow(a,x/2,m))%m;
	}
	return (solve(a,x-1,m)+qpow(a,x,m))%m;
}
int main(){
	cin>>a>>x>>m;
	cout<<solve(a,x,m);
	return 0;
}