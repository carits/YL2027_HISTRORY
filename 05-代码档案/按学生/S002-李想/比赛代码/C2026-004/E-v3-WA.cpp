#include<bits/stdc++.h>
using namespace std;

int t,id,n,k,ans=2e9;
int const N=2e5+5;
int a[N],ct[N],vis[N];
void slove(){
  cin>> n >> k;
  for(int i=1;i<=n;i++)cin>> a[i];
  for(int i=1;i<=n;i++)ct[a[i]]++;
  sort(a+1,a+n+1);
  for(int i=1;i<=2e5;i++){
    int x=i,cnt=ct[i],q=0;
    // if(vis[a[i]])continue;
    for(int j=1;;j++){
      x*=2;
      if(x<0||x>a[n])break;
      vis[x]=1;
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
    }
    if(cnt==k){
      ans=min(ans,q);
      // cout<< i << " ";
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