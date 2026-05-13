#include<bits/stdc++.h>
using namespace std;

int t,n;
int main(){
  cin>> t;
  while(t--){
    cin>> n;
    int u=3;
    for(int i=1;i<=n;i++)u=(u-1)*2;
    cout<< u << "\n";
  }
  return 0;
}