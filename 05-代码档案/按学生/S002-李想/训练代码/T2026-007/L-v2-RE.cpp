#include<bits/stdc++.h>
using namespace std;

int t,n,q,l,r,c;
int const N=1e5+5;
int a[N],cha[N];
void slove(){
  cin>> l >> r >> c;
  cha[l]+=c,cha[r+1]-=c;
}
int main(){
  cin>> n >> q;
  for(int i=1;i<=n;i++)cin>> a[i];
  while(q--)slove();
  for(int i=1;i<=n;i++){
    cha[i]+=cha[i-1];
    a[i]=a[i]+cha[i];
  }
  sort(a+1,a+n+1);
  cout<< a[1];
  return 0;
}