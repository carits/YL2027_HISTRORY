#include<bits/stdc++.h>
using namespace std;
int f(int a,int b,int p){
	if(b==1) return a;
	return (f(a,b/2,p)*f(a,(b+1)/2,p))%p;
}
int main(){
	int a,b,p;
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<f(a,b,p) ;
	return 0;
} 