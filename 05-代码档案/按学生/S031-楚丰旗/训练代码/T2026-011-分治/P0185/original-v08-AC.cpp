#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int o(long long a,long long b){
	if(b==0){
		return 1%c;
	}
	long long t=o(a,b/2);
	if(b%2==0){
		return t*t%c;
	}else{
		return a*t%c*t%c;
	}
}
int main(){
	cin>>a>>b>>c;
	cout<<a<<"^"<<b<<" mod "<<c<<"="<<o(a,b);
	return 0;
}