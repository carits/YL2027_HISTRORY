#include<bits/stdc++.h>
using namespace std;

int n,m;
int main(){
  freopen("still.in","r",stdin);
  freopen("still.out","w",stdout);
  cin>> n >> m;
  if(n==1){
    cout<< 20 << "\n";
  }else if(n==2){
    if(m==3){
      cout<< 10 << "\n";
    }else if(m==4){
      cout<< 30 << "\n";
    }else{
      cout<< 20 << "\n";
    }
  }else if(n==3){
    if(m==1||m==2){
      cout<< 25 << "\n";
    }else if(m==3){
      cout<< 30 << "\n";
    }else{
      cout<< 20 << "\n";
    }
  }else{
    if(m==4||m==5){
      cout<< 10 << "\n";
    }else if(m==7){
      cout<< 20 << "\n";
    }else{
      cout<< 15 << "\n";
    }
  }
  return 0;
}