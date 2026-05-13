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
    dp[i]=1ll<<i;
    // cout<< dp[i] <<  " ";
  }
  sort(a+1,a+n+1);
  for(int i=1;i<=n;i++){
    for(int k=1;k<=30;k++){
      if(dp[k]<=a[i]||dp[k]>a[n])continue;
      int sum=dp[k];
      int st=lower_bound(a+1,a+n+1,sum-a[i])-a,
      en=upper_bound(a+1,a+n+1,sum-a[i])-a-1;
      if(a[st]!=a[en])continue;
      if(a[i]==sum-a[i])ans--;
      ans+=en-st+1;
      cout<< a[i] << " " << a[en] << "\n";
    }
  }
  cout<< ans/2 << "\n";
  return 0;
}