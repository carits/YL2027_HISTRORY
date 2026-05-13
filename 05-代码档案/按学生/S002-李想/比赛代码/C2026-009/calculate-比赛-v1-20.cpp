#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m;
int const N=1e5+5;
int a[N];
string l="0123456789";
ll zhuan1(string s,ll m){
  ll nm=1,sm=0;
  for(int i=s.size()-1;i>=0;i--){
    char c=s[i];
    sm+=((c-'0')*nm);
    nm*=m;
  }
  return sm;
}
string zhuan2(ll x,ll m){
  string sx="";
  while(x){
    sx=l[x%m]+sx;
    x/=m;
  }
  return sx;
}
int main(){
  freopen("calculate.in","r",stdin);
  freopen("calculate.out","w",stdout);
  cin>> n >> m;
  for(int i=1,x;i<n;i++)cin>> x;
  string x,y;
  cin>> x >> y;
  cout<< zhuan2(zhuan1(x,m)*zhuan1(y,m),m);
  return 0;
}