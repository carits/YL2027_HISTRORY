#include<bits/stdc++.h>
using namespace std;

string f(string a,string c){
  int n=a.size();
  for(int i=0;i<n;i++){
      if(a[i]<c[i]){
          return "-1";
      }
  }
  return c;
}
int main(){
  int n;
  string a,b;
  cin>> n >> a >> b;
  cout<< f(a,b);
  return 0;
}