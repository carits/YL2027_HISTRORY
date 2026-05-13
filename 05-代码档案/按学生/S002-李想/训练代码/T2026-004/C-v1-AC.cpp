#include<bits/stdc++.h>
using namespace std;

int cnt,n,m;
bool rn(int n){
  return n%4==0&&n%100!=0||n%400==0;
}
int main(){
  cin>> n >> m;
  for(int i=n;i<=m;i++){
    if(rn(i))cnt++;
  }
  cout<< cnt << "\n";
  for(int i=n;i<=m;i++){
    if(rn(i))cout<< i << " ";
  }
  return 0;
}