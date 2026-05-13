#include<bits/stdc++.h>
using namespace std;

int n;
int const N=1e5+5;
struct node{
  int l,r;
} a[N];
int b[N];
bool cmp(const node &x,const node &y){
  if(x.l!=y.l)return x.l<y.l;
  return x.r<y.r;
}
int main(){
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i].l >> a[i].r;
  sort(a+1,a+n+1,cmp);
  for(int i=1;i<=n;i++)cout<< a[i].l << " " << a[i].r << "\n";
  return 0;
}