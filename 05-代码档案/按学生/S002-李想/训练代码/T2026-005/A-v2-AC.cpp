#include<bits/stdc++.h>
using namespace std;

int n;
int const N=1e5+5;
int a[N];
vector<int>v(N);
int fz(int l,int r){
  if(l==r)return 0;
  int mid=(r-l)/2;
  fz(l,l+mid);
  fz(l+mid+1,r);
  // cout<< l << " " << r << "\n";
  int i=l,j=l+mid+1,k=l;
  // cout<< i << " " << j << "\n";
  while(i<=l+mid&&j<=r){
    if(a[i]<a[j]){
      v[k++]=a[i++];
    }else{
      v[k++]=a[j++];
    }
  }
  while(k<=r){
    if(i<=l+mid)v[k++]=a[i++];
    else v[k++]=a[j++];
  }
  for(int p=l;p<=r;p++)a[p]=v[p];
  return 0;
}
int main(){
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i];
  fz(1,n);
  for(int i=1;i<=n;i++)cout<< a[i] << " ";
  return 0;
}