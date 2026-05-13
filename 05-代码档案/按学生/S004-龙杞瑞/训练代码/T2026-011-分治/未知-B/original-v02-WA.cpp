#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=1e8;
int a,x,m;
struct node{
	int f,s;
};
node f(int a,int b){
	node t;
    if(b==1){
    	t.f=1,t.s=a;
    	return t;
    } 
    t=f(a,b/2);
    if(b%2==0){
    	t.f=t.f*(1+t.s)%m; 
    	t.s=t.s*t.s%m;
    }else{
    	t.f=(t.f*(1+a*t.s%m)+t.s)%m; 
    	t.s=t.s*t.s%m*a%m;
    }
    return t;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>a>>x>>m;
	cout<<f(a,x).f; 
	return 0;
}