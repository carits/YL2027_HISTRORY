#include<bits/stdc++.h>
using namespace std;
int a,b[100001];
long long c,h;
string e,f,d;
int main(){
	preopen("calculate.in","r",stdin);
	preopen("calculate.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}cin>>e>>d;
	for(int i=0;i<e.size();i++){
		c*=b[e.size()-i];
		c+=e[i]-'0';
	}for(int i=0;i<d.size();i++){
		h*=b[d.size()-i];
		h+=d[i]-'0';
	}
	c*=h;
	for(int i=1;c;i++){
		f=to_string(c%b[i])+f;
		c/=b[i];
	}cout<<f;
}
