#include<bits/stdc++.h>
using namespace std;
#define int long long
int f(int a,int b,int p){
	if(b==1) return a%p; 
	if(b==0) return 1;
	if(b==2) return a*a%p;
	int cnt=f(a,b/2,p);
	if(b%2==0) return cnt*cnt%p;
	return cnt*cnt%p*a%p;
}
signed main(){
	int a,b,p;
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<f(a,b,p) ;
	return 0;
 }
/*
#include<bits/stdc++.h>
using namespace std;
long long a,b,p;
long long ksm(){
	long long ans=1;
	while(b){
		if(b&1)ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
int main(){
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"="<<ksm();
	return 0;
}
*/   