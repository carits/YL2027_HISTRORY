#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=15;
int a[N],vis[N];
void slove(){
  cin>> n;
  memset(vis,0,sizeof(vis));
  for(int i=1;i<=n;i++)cin>> a[i];
  bool flag=1;
  for(int i=1;i<n;i++){
    if(a[i]>a[i+1])flag=0;
  }
  if(flag){
    cout<< n << "\n";
    return;
  }
  for(int i=1;i<=n;i++){
    bool p=1;
    for(int j=1;j<=n;j++){
      if(vis[j])continue;
      vis[j]=1;
      vector<int>b;
      for(int k=1;k<=n;k++){
        if(vis[k])continue;
        b.push_back(a[k]);
      }
      if(b.size())sort(b.begin(),b.end());
      int u=-1;
      for(int k=1;k<=n;k++){
        if(vis[k])continue;
        if(b[++u]!=a[k]){
          p=0;
          break;#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=15;
int a[N],vis[N];
void slove(){
  cin>> n;
  memset(vis,0,sizeof(vis));
  for(int i=1;i<=n;i++)cin>> a[i];
  bool flag=1;
  for(int i=1;i<n;i++){
    if(a[i]>a[i+1])flag=0;
  }
  if(flag){
    cout<< n << "\n";
    return;
  }
  for(int i=1;i<=n;i++){
    bool p=1;
    for(int j=1;j<=n;j++){
      if(vis[j])continue;
      vis[j]=1;
      vector<int>b;
      for(int k=1;k<=n;k++){
        if(vis[k])continue;
        b.push_back(a[k]);
      }
      if(b.size())sort(b.begin(),b.end());
      int u=-1;
      for(int k=1;k<=n;k++){
        if(vis[k])continue;
        if(b[++u]!=a[k]){
          p=0;
          break;
        }
      }
      if(p){
        vis[j]=0;
      }else{
        break;
      }
    }
    if(p){
      cout<< n-i << "\n";
      return;
    }
  }
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}