#include<bits/stdc++.h>
using namespace std;
#define ll long long

int t;
ll x,y;
bool pd(int n){
    for(int i=2;i<=sqrt(n);i++){
      if(n%i==0)return false;
    }
    return true;
}
void slove(){
  cin>> x >> y;
  for(ll i=x;i<=y;i++){
    if(__gcd(x,i)==1&&__gcd(y,i)==1){
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