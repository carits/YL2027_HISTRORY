#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,ans;
int const N=2e5+5;
int a[N];
signed main(){
  cin>> t;
  while(t--){
    ans=0;
    cin>> n;
    for(int i=1;i<=n;i++)cin>> a[i];
    for(int i=1;i<=n;i++){
      for(int sum=a[i];sum<=i+n;sum+=a[i]){
        int j=sum-i;
        if(i>=j)continue;
        if(i+j==a[i]*a[j]){
          ans++;
          cout<< i << " " << j << "\n";
        }
      }
    }
    cout<< ans << "\n";
    for(int i=1;i<=n;i++)a[i]=0;
  }
  return 0;
}