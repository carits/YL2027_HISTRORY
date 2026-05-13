#include<bits/stdc++.h>
using namespace std;
 int t,id,n,k,ans=2e9;
int const N=2e5+5;
int C[N];
void slove(){
  cin>> n;
  for(int i=1,x;i<=n;i++)cin>> x;
  C[0]=1;
  int u=1e9+7;
  for(int i=1;i<=2e5;i++)C[i]=(C[i-1]*2)%u;
  for(int i=1,x;i<=n;i++){
    cin>> x;
    cout<< C[x]%u << " ";
  }
}
int main(){
  t=1;
  while(t--)slove();
  return 0;
}
//1 2 3 4 5
//1 2 2 4 4