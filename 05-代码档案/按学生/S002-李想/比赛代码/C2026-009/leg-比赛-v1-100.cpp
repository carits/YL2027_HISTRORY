#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m,a,b,c,d;
int main(){
  freopen("leg.in","r",stdin);
  freopen("leg.out","w",stdout);
  cin>> n >> m >> a >> b >> c >> d;
  ll zb=min(n,m),sm=0,mn=min(c+b,d+a);
  sm+=(zb*mn);
  if(n>m){
    int x=ceil(1.0*(n-m)/2),y=(n-m)/2;
    // cout<< x << " " << y << "\n";
    sm+=(x*a)+(y*c);
  }else if(n<m){
    int x=ceil(1.0*(m-n)/2),y=(m-n)/2;
    sm+=(x*b)+(y*d);
  }
  cout<< sm;
  return 0;
}
//(c b c b)
//(d a d a)