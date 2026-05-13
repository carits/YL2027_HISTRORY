#include<bits/stdc++.h>
using namespace std;

int t,n;
string s;
void slove(){
  cin>> n >> s;
  bool p=1;
  int t1[5005]={},t2[5005]={};
  for(int i=0;i<s.size();i++){
    t1[i]=i+1;
  }
  for(int i=1;i<s.size();i++){
    t2[i]=i-1;
  }
  while(p){
    p=0;
    for(int i=0;i<s.size();i++){
      int j=t1[i],li=t2[i];
      if(s[i]!='*'&&j<s.size()&&s[i]==s[j]){
        t1[li]=t1[j];
        t2[t1[j]]=li;
        p=1;
        s[i]=s[j]='*';
      }
    }
  }
  for(int i=0;i<s.size();i++){
    if(s[i]!='*'){
      cout<< "No\n";
      return;
    }
  }
  cout<< "Yes\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}