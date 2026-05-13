#include<bits/stdc++.h>
using namespace std;

void slove(){
  int n; 
  string s;
  cin>> n >> s;
  int ans=0;
  for(int i=0;i<n;i++){
    vector<int>v(10);
    int aa=0,bb=0;
    for(int l=1;l<=100;l++){
      int j=i+l-1;
      if(j>=n)break;
      v[s[j]-'0']++;
      aa=max(aa,v[s[j]-'0']);
      if(v[s[j]-'0']==1)bb++;
      ans+=(aa<=bb);
    }
  }
  cout<< ans << "\n";
}
int main(){
  int oT_To=0;
  cin>> oT_To;
  while(oT_To--)slove();
  return 0;
}