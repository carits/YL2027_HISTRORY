#include<bits/stdc++.h>
using namespace std;

int n,m;
int const N=1e4+5;
struct node{
  int v[15];
} a[N];
bool cmp(node x,node y){
  for(int i=1;i<=m;i++){
    if(x.v[i]!=y.v[i])return x.v[i]>y.v[i];
  }
  return 0;
}
int main(){
  cin>> n >> m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin>> a[i].v[j];
    }
  }
  sort(a+1,a+n+1,cmp);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout<< a[i].v[j] << " ";
    }
    cout<< "\n";
  }
  return 0;
}