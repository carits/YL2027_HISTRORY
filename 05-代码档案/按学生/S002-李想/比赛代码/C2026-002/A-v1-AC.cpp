#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=1e5+5;
void slove(){
  int ans=0;
  cin>> n;
  for(int i=1,x,y;i<=n;i++){
    cin>> x >> y;
    x=x-y;
    if(x>0)ans++;
  }
  cout<< ans << "\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}