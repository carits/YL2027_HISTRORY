#include<bits/stdc++.h>
using namespace std;
#define int long long
int f(int a,int b,int p){
	if(b==1) return a%p;
	if(b%2==0) return f(a,b/2,p)*f(a,b/2,p)%p;
	return (f(a,b/2,p)*f(a,b/2,p))*a%p;
}
signed main(){
	int a,b,p;
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<f(a,b,p) ;
	return 0;
}