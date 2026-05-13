#include<bits/stdc++.h>
using namespace std;
int t,n,a[200010],ans=0;
int main(){
 cin>>t;
 while(t--){
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  int sum=0,cnt=0;
  for(int i=1;i<=n;i++){
   sum+=a[i];
  }
  if(sum%n!=0){
   cout<<-1<<endl;
   continue;
  }else{
   for(int i=1;i<=n;i++){
    if(a[i]>sum/n) cnt++;
   }
   cout<<cnt<<endl;
  }
 }
  return 0;
}