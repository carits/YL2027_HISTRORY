#include<bits/stdc++.h>
using namespace std;
int a,b,p;
long long POW(int a,int b){
	if(b==0){
		return 1;
	}
	long long pp=POW(a,b>>1);
	if(b&1){
		return a*pp*pp%p;
	}else{
		return pp*pp%p;
	}
}
int main(){
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<POW(a,b);
	return 0;
}