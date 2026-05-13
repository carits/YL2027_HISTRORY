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
  if(pd(n/2)&&n%10!=9)cout<< "Yes";
  else cout<< "No";
  cout<< "\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}