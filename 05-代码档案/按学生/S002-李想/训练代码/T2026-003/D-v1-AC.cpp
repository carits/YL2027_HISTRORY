#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,ans;
int const N=1e3+5;
string s[N];
signed main(){
  cin>> n;
  for(int i=1;i<=n;i++)cin>> s[i];
  for(char c1='a';c1<='z';c1++){
    for(char c2=c1+1;c2<='z';c2++){
        int sum=0;
        for(int i=1;i<=n;i++){
          bool p=0;
          for(char c:s[i]){
           if(c!=c1&&c!=c2){
            p=1;
            break;
          }
        }
        if(!p)sum+=(s[i].size());
      }
      ans=max(ans,sum);
    }
  }
  cout<< ans;
  return 0;
}