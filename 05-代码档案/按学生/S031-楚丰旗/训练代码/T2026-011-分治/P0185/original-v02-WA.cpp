#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int o(int a,int b){
	if(b<=0){
		return 1;
	}
	int t=o(a,b/2);
	if(b%2==0){
		return t*t;
	}else{
		return a*t*t;
	}
}
int main(){
	cin>>a>>b>>c;
	cout<<a<<"^"<<b<<" mod "<<c<<"="<<o(a,b)%c;
	return 0;
}