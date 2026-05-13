#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n,id;
ll ans=1e18;
int const N=2e5+5;
ll a[N];
int main(){
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i];
  sort(a+1,a+n+1);
  for(int c=1;;c++){
    ll sum=0,nw=1;
    for(int i=1;i<=n;i++){
      sum+=abs(a[i]-nw);
      nw*=c;
    }
    if(ans>sum){
      ans=min(ans,sum);
      id=c;
    }else break;
  }
  cout<< ans;
  return 0;
}