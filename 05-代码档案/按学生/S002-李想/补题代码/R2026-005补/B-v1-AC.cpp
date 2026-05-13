#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>

int t;
string s1,s2;
void sl(string s,string &a,string &b){
  if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u'||s[0]=='v'){
    a="",b=s;
    return;
  }
  a=b="";
  if(s[1]=='h')a=(s[0]+s[1]);
  else a=s[0];
  if(s[1]=='h'){
    for(int i=2;i<s.size();i++)b+=s[i];
  }
  else {
    for(int i=1;i<s.size();i++)b+=s[i];
  }
}
void slove(){
  cin>> s1 >> s2;
  string xa,ya,xb,yb;
  sl(s1,xa,xb);
  sl(s2,ya,yb);
  if(xa!=ya&&xb!=yb){
    cout<< 0;
  }else if(xa!=ya){
    cout<< 1;
  }else if(xb!=yb){
    cout<< 2;
  }else{
    cout<< 3;
  }
  cout<< "\n";
}
int main(){
  ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
  t=1;
  // cin>> t;
  while(t--)slove();
  return 0;
}//