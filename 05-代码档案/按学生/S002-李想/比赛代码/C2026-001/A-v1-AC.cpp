#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=15;
int a[N];
void slove(){
  int ans=0;
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i];
  sort(a+1,a+n+1,greater<int>());
  for(int i=1;i<=n;i++){
    if(a[i]==a[1])ans++;
  }
  cout<< ans << "\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}