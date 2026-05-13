#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m,k;
int const N=1e5+5;
int a[N];
int main(){
  freopen("plan.in","r",stdin);
  freopen("plan.out","w",stdout);
  cin>> n >> m >> k;
  if(m==1){
    for(int i=1;i<=n;i++){
      cin>> a[i] >> a[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
      int sum=0;
      for(int j=i;j<=n;j++){
        sum++;
        if(sum>k){
          ans=max(ans,j-i);
          break;
        }
        if(a[i]==0){
          if(sum+j-1>k){
            ans=max(ans,j-i);
            break;
          }
          sum+=(j-1);
        }
      }  
    }
    cout<< ans;
  }
  return 0;
}