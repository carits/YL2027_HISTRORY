#include<bits/stdc++.h>
using namespace std;
int a,b,p;
long long s=1;
int main(){
	cin>>a>>b>>p;
	printf("%d^%d mod %d=",a,b,p);
	for (int i=1;i<=b;i++){
		s*=a;
		s%=p; 
	}
	cout<<s;
	return 0;
} 