#include<bits/stdc++.h>
using namespace std;

int n,m,q;
string s,t;
int l,r;
int const N=1e5+5;
int cha[N],sum[N];
int main(){
  cin>> n >> m >> q;
  cin>> s >> t;
  int last=0;
  while(s.find(t,last)!=string::npos){
    last=s.find(t,last);
    cha[last]++;
    last++;
  }
  sum[0]=sum[i-1]+cha[i];
  for(int i=0;i<n;i++)sum[i]=sum[i-1]+cha[i];
  while(q--){
    cin>> l >> r;
    l--,r--;
    r=r-(m)+1;
    if(l==0)cout<< sum[r];
    if(l==0)continue;
    // cout<< r << " ";
    if(r<l)cout<< 0 << "\n";
    else cout<< sum[r]-sum[l-1] << "\n";//-sum[l-1]
  }
  return 0;
}