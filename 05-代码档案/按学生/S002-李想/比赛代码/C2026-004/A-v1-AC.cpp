#include<bits/stdc++.h>
using namespace std;

int t,n;
string s;
int sum[30];
bool pd(int i){
  return sum[s[i]-'a']>=2;
}
void slove(){
  cin>> n >> s;
  s='#'+s;
  for(int i=1;i<=n;i++){
    sum[s[i]-'a']++;
  }
  bool p=0;
  for(int i=2;i<n;i++){
    if(pd(i))p=1;
  }
  if(p==1)cout<< "Yes";
  else cout<< "No";
  cout<< "\n";
  for(int i=0;i<=26;i++){
    sum[i]=0;
  }
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}