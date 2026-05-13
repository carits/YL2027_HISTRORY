#include<bits/stdc++.h>
using namespace std;
long long p;
long long f(long long x,long long y){
	if(y==0){
		return 1;
	}
	long long t=f(x,y/2);
	if(y%2==0){
		t=(t*t)%p;
	}else{
		t=((t*t)%p*x)%p;
	}
	return t;
}
int main(){
	long long a,b;
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<f(a,b);
	return 0;
}