#include<bits/stdc++.h>
using namespace std;

int n,mx=1e5,ans;
int const N=2e5+5;
int a[N],cnt[N];
int main(){
  cin>> n;
  for(int i=1;i<=n;i++){
    cin>> a[i];
  }
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      if(i==j)continue;
      cnt[a[i]+a[j]]++;
    }
  }
  for(int i=0;i<=n;i++){
    for(int i=1;i<=mx;i++){
      ans=max(ans,(int)cnt[i]);
    }
  }
  cout<< ans << " ";
  return 0;
}