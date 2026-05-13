#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,ans;
int const N=2e5+5;
int a[N],dp[100];
map<int,int>mp;
signed main(){
  ans=0;
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=1;i<=30;i++){
    dp[i]=1<<i;
    // cout<< dp[i] <<  " ";
  }
  for(int i=1;i<=n;i++)mp[a[i]]++;
  for(int i=1;i<=n;i++){
    for(int k=1;k<=30;k++){
      if(dp[k]<=a[i])continue;
      int sum=dp[k];
      if(sum-a[i]==a[i])
      ans+=mp[sum-a[i]];
    }
  }
  cout<< ans << "\n";
  return 0;
}