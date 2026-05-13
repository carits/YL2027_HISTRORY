#include<bits/stdc++.h>
using namespace std;

int n,k,x,y;
int const N=1e7+5,mod=1e9+7;
long long a[N];
long long Sort(int l,int r,int k){
  if(l>=r)return a[l];
  int mid=(r-l+1)/3+l,i=l,j=r;
  mid=a[mid];
  while(i<=j){
    while(a[i]<mid)i++;
    while(a[j]>mid)j--;
    if(i<=j){
      swap(a[i++],a[j--]);
    }
  }
  if(k<=j-l-1){
    return Sort(l,i,k);
  }else if(k>(i-l)){
    return Sort(j,r,k-(i-l));
  }else{
    return mid;
  }
}
int main(){
  cin>> n >> k >> x >> y;
  a[0]=1;
  for(int i=1;i<=n;i++)a[i]=(a[i-1]*x+y)%mod;
  cout<< Sort(1,n,k);
  return 0;
}