#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,ans;
string s;
int const N=2e5+5;
int a[N],sum[N];
map<int,int>mp;
void slove(){
  ans=0;
  mp.clear();
  cin>> n >> s;
  map<int,int>vis;
  for(int i=1;i<=n;i++)a[i]=(s[i-1]-'0')-1;
  for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
  for(int i=0;i<=n;i++)mp[sum[i]]++;
  for(int i=0;i<=n;i++){
  	if(vis[sum[i]])continue;
  	vis[sum[i]]=1;
	ans+=((mp[sum[i]])*(mp[sum[i]]-1))/2;
  }
  cout<< ans<< "\n";
}
signed main(){
  cin>> t;
  while(t--)slove(); 
  return 0;
}