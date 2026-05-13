#include<bits/stdc++.h>
using namespace std;
struct node{
	long long y;
	long long z;
};
node f(long long a,long long x,long long m){
	if(x==1){
		return {1%m,a};
	}
	node t=f(a,x/2,m);
	if(x%2==0){
		t.y=t.y*(1+t.z)%m;
		t.z=t.z*t.z%m;
	}else{
		t.y=(t.y*(1+a*t.z%m)+t.z)%m;
		t.z=t.z*t.z%m*a%m;
	}
	return t;
}
int main(){
	long long a,x,m;
	cin>>a>>x>>m;
	cout<<f(a%m,x,m).y;
	return 0;
}