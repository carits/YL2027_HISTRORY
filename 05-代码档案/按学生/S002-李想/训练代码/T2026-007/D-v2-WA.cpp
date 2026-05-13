#include<bits/stdc++.h>
using namespace std;

int n,k,ans=2e9;
int const N=1e5+5;
int a[N],sum[N];
int main(){
  cin>> n >> k;
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
  int id=0;
  for(int i=k;i<=n;i++){
  	if(ans>sum[i]-sum[i-k])ans=sum[i]-sum[i-k],id=i;
  }
  cout<< id-k+1;
  return 0;
}