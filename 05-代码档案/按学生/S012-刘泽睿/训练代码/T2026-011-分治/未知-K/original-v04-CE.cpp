#include<bits/stdc++.h>
using namespace std;
string a,s,f,l;
long long b,c;
int d;
void p(int o){
  if(o==1)s="bc",f="ac",l="bc";
  if(o%2){
    p(o/2);
    string s1,f1,l1;
    for(int i=1;i<s.size();i++){
      if(s[i]=='a'){
        s1+="bc";
      }if(f[i]=='a'){
        f1+="bc";
      }if(l[i]=='a'){
        l1+="bc";
      }if(s[i]=='b'){
        s1+="ac";
      }if(f[i]=='b'){
        f1+="ac";
      }if(l[i]=='b'){
        l1+="ac";
      }if(s[i]=='c'){
        s1+="ab";
      }if(f[i]=='c'){
        f1+="ab";
      }if(l[i]=='c'){
        l1+="ab";
      }
    }string s2,f2,l2;
    for(int i=1;i<s1.size();i++){
      if(s1[i]=='a'){
        s2+=s;
      }if(f1[i]=='a'){
        f2+=s;
      }if(l1[i]=='a'){
        l2+=s;
      }if(s1[i]=='b'){
        s2+=f;
      }if(f1[i]=='b'){
        f2+=f;
      }if(l1[i]=='b'){
        l2+=f;
      }if(s1[i]=='c'){
        s2+=l;
      }if(f1[i]=='c'){
        f2+=l;
      }if(l1[i]=='c'){
        l2+=l;
      }
    }
  }else{
    p(o/2);
    string s1,f1,l1;
    for(int i=1;i<s.size();i++){
      if(s[i]=='a'){
        s1+=s;
      }if(f[i]=='a'){
        f1+=s;
      }if(l[i]=='a'){
        l1+=s;
      }if(s[i]=='b'){
        s1+=f;
      }if(f[i]=='b'){
        f1+=f;
      }if(l[i]=='b'){
        l1+=f;
      }if(s[i]=='c'){
        s1+=l;
      }if(f[i]=='c'){
        f1+=l;
      }if(l[i]=='c'){
        l1+=l;
      }
    }
  }return;
}
int main(){
  cin>>a>>d;
  for(int i=1;i<=d;i++){
    cin>>b>>c;
    s="a",f="b",l="c";
    p(b);
    for(int j=1;j<=a;i++){
      if(c[j]=='a')
      b+=s;
      if(c[j]=='b'){
      b+=f;
      }if(c[j]=='c'){
      b+=l;
      }
    }
  }
}