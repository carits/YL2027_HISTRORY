#include<bits/stdc++.h>
using namespace std;
struct node{
  long long c;
  long long m;
}a[3000005];
bool cmp(node A,node B){
  if(A.m==B.m){
    return A.c>B.c;
  }
  return A.m>B.m;
}
int main(){
  long long n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    cin>>a[i].c>>a[i].m;
  }
  long long minn=INT_MAX;
  long long sum=0;
  long long ans=0;
  for(int i=1;i<=k;i++){
    long long w=0;
    long long y=0,z=0;
    for(int j=1;j<=n;j++){
      if(a[j].m==z&&a[j].c>y){
        z=a[j].m;
        y=a[j].c;
        w=j;
      }
      if(a[j].m>z){
        z=a[j].m;
        y=a[j].c;
        w=j;
      }
    }
    a[w].c=0;
    a[w].m=0;
    sum+=y;
    minn=min(minn,z);
    ans=max(ans,sum*minn);
  }
  cout<<ans;
  return 0;
}