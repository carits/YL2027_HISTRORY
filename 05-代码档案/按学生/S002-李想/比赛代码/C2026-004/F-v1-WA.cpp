#include<bits/stdc++.h>
using namespace std;

int t,id,n,k,ans=2e9;
int const N=2e5+5;
int a[N],ct[N];
void slove(){
  cin>> n >> k;
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=1;i<=n;i++)ct[a[i]]++;
  sort(a+1,a+n+1);
  for(int i=1;i<=n;i++){
    int x=a[i],cnt=ct[a[i]],q=0;
    for(int j=1;;j++){
      if(x>a[n])break;
      if(cnt+ct[x]>=k){
        q+=(j*(k-cnt));
        cnt=k;
        break;
      }else{
        q+=(j*ct[x]);
        cnt+=ct[x];
      }
      x++;
      if(cnt+ct[x]>=k){
        q+=(j*(k-cnt));
        cnt=k;
        break;
      }else{
        q+=(j*ct[x]);
        cnt+=ct[x];
      }
      x--;
      x=a[i]*j;
    }
    if(cnt==k){
      ans=min(ans,q);
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