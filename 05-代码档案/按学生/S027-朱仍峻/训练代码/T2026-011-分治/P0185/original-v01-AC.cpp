#include <bits/stdc++.h>
using namespace std;
long long a,b,p;
long long pw(long long a,long long b,long long p){
	long long ans=1;
	while(b)
	{
		if(b&1)
			ans=ans*a%p;
		a=a*a%p;
		b>>=1;	
	}
	return ans;
}
int main(){
    cin>>a>>b>>p;
    cout<<a<<'^'<<b<<" mod "<<p<<'=';
    cout<<pw(a,b,p);
    return 0;
}