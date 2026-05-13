#include<bits/stdc++.h>
using namespace std;

int t;
void slove(){
  char ch[5][5],oi='a';
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
      cin>> ch[i][j];
      if(ch[i][j]=='.')ch[i][j]=char(oi++);
    }
  }
  string win="DRAW";
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
      if(ch[i][1]!=ch[i][j])break;
      if(j==3){
        win=ch[i][1];
      }
    }
  }
  bool v[4]={};
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
      if(ch[1][i]!=ch[j][i]){
        v[i]=1;
      }
    }
  }
  for(int i=1;i<=3;i++){
    if(v[i])continue;
    win=ch[1][i];
  }
  if(ch[1][1]==ch[2][2]&&ch[2][2]==ch[3][3])win=ch[1][1];
  if(ch[1][3]==ch[2][2]&&ch[2][2]==ch[3][1])win=ch[1][3];
  cout<< win << "\n";
}
int main(){
  cin>> t;
  while(t--)slove();
  return 0;
}