#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int o(long long a,long long b){
	if(b<=0){
		return 1%c;
	}
	int t=o(a,b/2);
	if(b%2==0){
		return t*t%c;
	}else{
		return a%c*t*t%c;
	}
}
int main(){
	cin>>a>>b>>c;
	cout<<a<<"^"<<b<<" mod "<<c<<"="<<o(a,b)%c;
	return 0;
}