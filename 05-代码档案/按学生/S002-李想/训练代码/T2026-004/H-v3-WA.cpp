#include<bits/stdc++.h>
using namespace std;

int n;
int const N=1e5+5;
int a[N];
void slove(){
  int ans=-1E9,A,B;
  vector<int>b;
  map<int,int>mp;
  cin>> n; 
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=1;i<=n;i++){
    mp[a[i]]=i;
  }
  vector<int>vc;
  for(int i=1;i<=n;i++){
    int j=mp[a[i]];
    if(i==j)continue;
    vector<int>v;
    v.push_back(i),v.push_back(j);
    for(int k=i+1;k<j;k++){
      if(a[k]>=0)v.push_back(k);
    }
    int sum=0;
    for(int p:v){
      sum+=a[p];
    }
    if(ans<sum){
      ans=sum;
      A=i-1+(n-j);
      vc.clear();
      for(int k=1;k<i;k++)vc.push_back(k);
      for(int k=i+1;k<j;k++){
        if(a[k]>=0)continue;
        vc.push_back(k);
      }
      for(int k=j+1;k<=n;k++)vc.push_back(k);
    }
  }
  cout<< ans << " " << vc.size() << "\n";
  for(int i:vc)cout<< i << " ";
}
int main(){
  int oT_To=1;
  while(oT_To--)slove();
  return 0;
}