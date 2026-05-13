#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b,p,x=2,m=4;
int f(int a,int b){
    if(b==0) return 1;
    int x=f(a,b/2);
    if(b%2==0) return x*x%p;
    else return a*x%p*x%p;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"=";
	if(b==0){
		cout<<1<<'\n';
		return 0; 
	}
	cout<<f(a,b)%p;
	return 0;
} 