#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    if(a==b){
      cout<<0<<'\n';
      continue;
    }
    if(a<b){
      int h=a;
      a=b;
      b=h;
    }
    while(abs(a-b)>c*2){
      a-=c;
      b+=c;
      cnt++;
    }
    cout<<cnt+1<<'\n';
  }
  return 0;
}