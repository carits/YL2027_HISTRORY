#include<bits/stdc++.h>
using namespace std;
int a,b,p;
long long s=1;
int main(){
	cin>>a>>b>>p;
	printf("%d^%d mod %d=",a,b,p);
	while(b){
		if(b&1){
			s*=a;
			s%=p;
		}
		a=a*a%p;
		b>>=1;
	} 
	cout<<s;
	return 0;
} 