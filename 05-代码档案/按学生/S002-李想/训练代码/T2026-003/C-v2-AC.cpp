#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n;
int const N=1e6+5;
int dp[N];
signed main(){
  cin>> t;
  while(t--){
    cin>> dp[1] >> n;
    if(n==1){
      cout<< dp[1] << " ";
      continue;
    }
    for(int i=2;i<=n;i++){
      dp[i]=dp[i-1];
      int mx=0,mn=1e9;
      int xy=dp[i-1];
      while(xy){
        int x=xy%10;
        mn=min(mn,x);
        mx=max(mx,x);
        xy/=10;
      }
      dp[i]+=(mx*mn);
      if(dp[i]==dp[i-1]||i==n){
        cout<< dp[i];
        for(int j=1;j<=i;j++)dp[i]=0;
        break;
      }
    }
    cout<< "\n";
  }
  return 0;
}