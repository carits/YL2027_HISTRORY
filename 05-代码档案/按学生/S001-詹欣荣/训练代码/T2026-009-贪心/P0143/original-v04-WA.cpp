#include<bits/stdc++.h>
using namespace std;
struct node{
  long long c;
  long long m;
}a[10000005];
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
  sort(a+1,a+n+1,cmp);
  long long minn=INT_MAX;
  long long sum=0;
  long long ans=0;
  for(int i=1;i<=k;i++){
    sum+=a[i].c;
    minn=min(minn,a[i].m);
    ans=max(ans,sum*minn);
  }
  int u;
  cout<<ans;
  return 0;
}