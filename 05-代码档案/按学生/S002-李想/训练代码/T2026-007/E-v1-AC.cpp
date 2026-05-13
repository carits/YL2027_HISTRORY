#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,ans;
string s;
int const N=2e5+5;
int a[N],sum[N];
map<int,int>mp;
signed main(){
  cin>> n >> s;
  for(int i=1;i<=n;i++)a[i]=((s[i-1]=='0')?-1:1);
  for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
  for(int i=0;i<=n;i++)mp[sum[i]]=i;
  for(int i=0;i<=n;i++){
  	ans=max(ans,mp[sum[i]]-i);
  }
  cout<< ans;
  return 0;
}