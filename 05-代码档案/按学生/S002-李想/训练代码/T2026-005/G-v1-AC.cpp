#include<bits/stdc++.h>
using namespace std;

int n;
int const N=1e5+5;
struct node{
  int id,x;
} a[N];
bool cmp(node x,node y){
  if(x.x!=y.x)return x.x<y.x;
  return x.id<y.id;
}
int main(){
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i].x;
  for(int i=1;i<=n;i++)a[i].id=i;
  sort(a+1,a+n+1,cmp);
  for(int i=1;i<=n;i++)cout<< a[i].id << " ";
  return 0;
}