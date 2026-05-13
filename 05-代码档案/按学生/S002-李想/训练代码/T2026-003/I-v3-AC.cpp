#include<bits/stdc++.h>
using namespace std;
#define int long long

long long n,ans;
int const N=2e5+5;
int a[N];
map<int,int>mp;
signed main(){
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=1;i<=n;i++)mp[a[i]]++;
  for(int i=1;i<n;i++){
  	mp[a[i]]--;
    for(int k=0;k<=30;k++){
      ans+=mp[(1<<k)-a[i]];
    }
  }
  cout<< ans << "\n";
  return 0;
}