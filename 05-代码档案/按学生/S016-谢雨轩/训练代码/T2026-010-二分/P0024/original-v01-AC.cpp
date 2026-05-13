#include<bits/stdc++.h>
using namespace std;
int n,m;
int t=240;
int s;
int main(){
 cin>>n>>m;
 t-=m;
 for (int i=1;i<=n;i++){
  t-=i*5;
  if(t>=0){
   s++;
  } 
  else{
   break;
  }
 }
 cout<<s;
 return 0;
}