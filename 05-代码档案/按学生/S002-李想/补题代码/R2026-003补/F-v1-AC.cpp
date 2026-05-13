#include<bits/stdc++.h>
using namespace std;
#define ll long long

int t;
ll x,y;
void slove(){
  cin>> x >> y;
  for(ll i=x;i<=y;i++){
    if(__gcd(x,i)==__gcd(i,y)&&__gcd(i,y)==1&&i!=1){
      cout<< i << "\n";
      return;
    }
  }
  cout<< -1 << "\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}