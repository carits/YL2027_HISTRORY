#include<bits/stdc++.h>
using namespace std;
#define int long long

void dfs(int n,char a,char b,char c){
  if(n==0){
    return;
  }
  dfs(n-1,a,c,b);
  cout<< n << ":" << a << "->" << c << "\n";
  dfs(n-1,b,a,c);
}
signed main(){
  int n;
  char a,b,c;
  cin>> n >> a >> b >> c;
  dfs(n,a,b,c);
  return 0;
}