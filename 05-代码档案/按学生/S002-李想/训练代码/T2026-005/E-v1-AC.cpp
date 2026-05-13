#include<bits/stdc++.h>
using namespace std;

int n,m;
int const N=1e5+5;
struct node{
  int s,id;
}a[N];
bool cmp(const node &x,const node &y){
  if(x.s!=y.s)return x.s>y.s;
  return x.id<y.id;
}
int main(){
  cin>> n >> m;
  for(int i=1;i<=n;i++){
    cin>> a[i].id >> a[i].s;
  }
  sort(a+1,a+n+1,cmp);
  int x=m*1.5,cnt=0;
  x=a[x].s;
  cout<< x << " ";
  for(int i=1;i<=n;i++){
    if(a[i].s<x)break;
    cnt++;
  }
  cout<< cnt << "\n";
  for(int i=1;i<=n;i++){
    if(a[i].s<x)break;
    cout<< a[i].id << " " << a[i].s << "\n";
  }
  return 0;
}