#include<bits/stdc++.h>
using namespace std;

int t,id,n,k,ans=2e9;
int const N=2e5+5;
int a[N];
vector<int>v[N];
void slove(){
  cin>> n >> k;
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=1;i<=n;i++){
    int nc=a[i],tt=0;
    while(nc){
      v[nc].push_back(tt);
      tt++;
      nc/=2;
    }
  }
  // sort(a+1,a+n+1);
  for(int pp=1;pp<=2e5;pp++){
    if(v[pp].size()>=k)sort(v[pp].begin(),v[pp].end());
  }
  for(int pp=1;pp<=2e5;pp++){
    int as=0;
    if(v[pp].size()>=k){
      for(int i=0;i<k;i++){
        as+=v[pp][i];
      }
      if(ans>as){
        ans=as;
        id=pp;
      }
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