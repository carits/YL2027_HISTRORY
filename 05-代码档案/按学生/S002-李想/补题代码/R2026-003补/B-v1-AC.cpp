#include<bits/stdc++.h>
using namespace std;
#define ll long long

int t;
ll n;
bool pd(ll n){
  while(n>=10)n/=10;
  return n>=5;
}
void slove(){
  cin>> n;
  bool p=((n%10!=9)&&pd(n/2));
  n/=10;
  while(n){
    int x=n%10;
    if(x==0)p=0;
    n/=10;
    // cout<< x << " " << cnt << "  ";
  }
  if(p)cout<< "Yes";
  else cout<< "No";
  cout<< "\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}