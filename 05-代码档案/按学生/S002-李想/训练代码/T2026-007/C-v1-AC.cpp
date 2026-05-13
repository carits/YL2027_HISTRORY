#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,q;
int const N=2e5+5;
int a[N],sum1[N],sum2[N];
void slove(){
  int l,r;
  cin>> l >> r;
  if(l<=r){
  	cout<< sum1[r]-sum1[l] << "\n";
  }else{
    cout<< sum2[r]-sum2[l] << "\n";  
  }
}
signed main(){
  cin>> n >> q;
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=2;i<=n;i++)sum1[i]=sum1[i-1]+max(0ll,a[i-1]-a[i]);
  for(int i=n-1;i>=1;i--)sum2[i]=sum2[i+1]+max(0ll,a[i+1]-a[i]);
  while(q--)slove();
  return 0;
}