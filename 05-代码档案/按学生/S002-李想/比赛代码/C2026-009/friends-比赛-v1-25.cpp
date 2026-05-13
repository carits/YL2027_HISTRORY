#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,ans;
int const N=2e5+5;
ll a[N],sum[N];
void dfs(ll dy,ll en,ll lst,ll gd){
  if(lst==n)return;
  if(dy==en){
    gd=__gcd(gd,sum[n]-sum[lst]);
    ans=max(ans,gd);
  }
  ll sm=0;
  if(dy==1){
    for(int i=lst+1;i<=n;i++){
      sm=sum[i]-sum[lst];
      dfs(dy+1,en,i,sm);
    }
  }else{
    for(int i=lst+1;i<=n;i++){
      sm=sum[i]-sum[lst];
      dfs(dy+1,en,i,__gcd(gd,sm));
    }
  }
}
int main(){
  freopen("friends.in","r",stdin);
  freopen("friends.out","w",stdout);
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
  if(n<=25){
    cout<< sum[n] << " ";
    for(int i=2;i<=n;i++){
      ans=0;
      dfs(1,i,0,0);
      cout<< ans << " ";
    }
    return 0;
  }
  for(int i=1;i<=n;i++){
    cout<< n/i << "\n";
  }
  return 0;
}