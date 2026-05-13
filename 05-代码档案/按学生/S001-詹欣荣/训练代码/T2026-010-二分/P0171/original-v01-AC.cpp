#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1000005];
bool check(int x){
  long long y=0;
  for(int i=1;i<=n;i++){
    if(a[i]-x>=0){
      y+=a[i]-x;
    }
  }
  return y<m;
}
int main(){
  cin>>n>>m;
  long long maxn=0;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    maxn=max(maxn,a[i]);
  }
  long long r=maxn;
  long long l = 0;
  while (l<r) {
    int mid=l+(r-l)/2;
    if(check(mid)){
      r=mid;
    }
    else{
      l=mid+1;
    }
  }
  cout<<l-1;
  return 0;
}