#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
int m(int s){
  if(s==1){
    d=a;
    return 1%c;
  }int h=m(s/2);
  if(s%2){
    int y=(h*d*a+h+d)%c;
    d*=d*a;
    return y;
  }else{
    int y=(h*d+h)%c
    d=d*d;
    return y;
  }
}
int main(){
  cin>>a>>b>>c;
  cout<<m(b);
}