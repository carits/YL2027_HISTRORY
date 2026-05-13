#include<bits/stdc++.h>
using namespace std;
#define int long long
 int n,k;
bool check(int x){
 int nn=x,nx=1,cnt=0;
 while(nn/nx!=0){
  cnt+=nn/nx;
  nx*=k;
 }
 return cnt>=n;
}
signed main(){
 cin>> n >> k;
 int l=0,r=n+1;
 while(l+1<r){
  int mid=(l+r)>>1;
  if(check(mid))r=mid;
  else l=mid;
 }
 cout<< r;
 return 0;
}