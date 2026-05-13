#include<bits/stdc++.h>
using namespace std;
string f(string s){
 if(s.size()&1){
  return s;
 }
 string s1=s.substr(0,s.size()/2),s2=s.substr(s.size()/2,s.size()/2);
 s1=f(s1),s2=f(s2);
 if(s1<s2){
  return s1+s2;
 }
 return s2+s1;
}
string a,b;
int main(){
 cin>>a>>b;
 if(a.size()!=b.size()){
  cout<<"NO";
  return 0;
 }
 if(f(a)==f(b)){
  cout<<"YES";
 }else{
  cout<<"NO";
 }
 return 0;
}