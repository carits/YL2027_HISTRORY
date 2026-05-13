#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,x,y;
signed main(){
 ios::sync_with_stdio(0);
 cin.tie(0),cout.tie(0);
 cin>>t;
 while(t--){
  cin>>n>>x>>y;  
  int a=y-x;
  for(int i=n;i>=1;i--){
   if(a%(i-1)==0){
    int p=a/(i-1),j;
    for(j=1;j<=n;j++){
     if(x+(j-1)*p>y)break;
     cout<<x+(j-1)*p<<" ";
    } 
    j--,j=n-j;
    for(int k=x-p;k>0&&j;k-=p) cout<<k<<" ",j--;
    for(int k=y+p;j;k+=p) cout<<k<<" ",j--;
    break;
   }
  }
  cout<<'\n';
 }
 return 0;
}