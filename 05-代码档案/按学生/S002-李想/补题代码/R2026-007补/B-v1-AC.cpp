#include<bits/stdc++.h>
using namespace std;

int t,n,ct;
int const N=2e5+5;
int a[N];
void slove(){
  cin>> n;
  for(int i=1;i<=n;i++){
    cin>> a[i];
  }
  for(int i=1;i<=n;i++){
    if(a[i]==n)cout<< 1 << " ";
    else cout<< a[i]+1 << " ";
  }
  cout<< "\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}//