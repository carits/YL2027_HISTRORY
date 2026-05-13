#include<bits/stdc++.h>
using namespace std;
int n,m;
int a,b;
int c,d;
unsigned long long l,h; 
unsigned long long s;
int main(){
	freopen("leg.in","r",stdin);
	freopen("leg.out","w",stdout);
    cin>>n>>m>>a>>b>>c>>d;
    if(m%2==0){
        h=m/2*b+m/2*d;
    }
    else{
        h=m/2*d+(m-m/2)*b;
    }
    if(n%2==0){
        l=n/2*a+n/2*c;
    }
    else{
        l=n/2*c+(n-n/2)*a;
    }
    s=h+l;
    cout<<s;
	return 0;
}

