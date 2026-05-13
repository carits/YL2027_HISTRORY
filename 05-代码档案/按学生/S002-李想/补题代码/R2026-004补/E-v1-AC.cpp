#include<bits/stdc++.h>
using namespace std;

int t,id,n,k,ans=2e9;
int const N=2e5+5;
int a[N];
void slove(){
  cin>> n >> k;
  for(int i=1;i<=n;i++)cin>> a[i];
  // sort(a+1,a+n+1);
  for(int pp=1;pp<=2e5;pp++){
    vector<int>v;
    for(int i=1;i<=n;i++){
      int nc=a[i],cnt=0;
      while(nc){
        if(nc==pp){
          v.push_back(cnt);
          break;
        }
        cnt++;
        nc/=2;
      }
    }
    sort(v.begin(),v.end());
    if(v.size()>=k){
      int as=0;
      for(int i=0;i<k;i++){
        as+=v[i];
      }
      ans=min(ans,as);
    }
  }
  cout<< ans;
}
int main(){
  t=1;
  while(t--)slove();
  return 0;
}
//1 2 3 4 5
//1 2 2 4 4