#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,k;
int const N=1e3+5;
int c[N][N];
void slove(){
  int ans=0;
  cin>> n >> k;
  int d=__lg(n);
  for(int i=0;i<d;i++){
    for(int j=max(0ll,(k-i));j<=i;j++){
      ans+=c[i][j];
    }
  }
  if(d>=k)ans++;
  cout<< ans << "\n";
}
signed main(){
  cin>> t;
  for(int i=0;i<30;i++)c[i][0]=1;
  for(int i=1;i<30;i++){
    for(int j=1;j<30;j++){
      c[i][j]=c[i-1][j-1]+c[i-1][j];
      // cout<< c[i][j] << " ";
    }
    // cout<< "\n";
  }//
  while(t--)slove();
  return 0;
}