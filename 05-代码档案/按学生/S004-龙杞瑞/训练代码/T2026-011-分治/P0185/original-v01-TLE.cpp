#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b,p,m=1;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>a>>b>>p;
	cout<<a<<"^"<<b<<" mod "<<p<<"=";
	for(int i=1;i<=b;i++){
		m*=a;
		m%=p;
	}
	cout<<m;
	return 0;
} 