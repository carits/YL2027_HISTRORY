#include<bits/stdc++.h>
using namespace std;

int n;
int const N=1e6+5;
int a[N];
vector<int>v(N);
long long fz(int l,int r){
  if(l==r)return 0;
  long long cnt=0;
  int mid=(r-l)/2;
  cnt+=fz(l,l+mid);
  cnt+=fz(l+mid+1,r);
  // cout<< l << " " << r << "\n";
  int i=l,j=l+mid+1,k=l;
  // cout<< i << " " << j << "\n";
  while(i<=l+mid&&j<=r){
    if(a[i]<a[j]){
      v[k++]=a[i++];
      cnt+=j-(l+mid+1);
    }else{
      v[k++]=a[j++];
    }
  }
  while(k<=r){
    if(i<=l+mid){
      v[k++]=a[i++];
      cnt+=j-(l+mid+1);
    }
    else v[k++]=a[j++];
  }
  for(int p=l;p<=r;p++)a[p]=v[p];
  return cnt;
}
int main(){
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i];
  cout<< fz(1,n);
  return 0;
}