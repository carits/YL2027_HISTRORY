#include<bits/stdc++.h>
using namespace std;

int n,s,a,b;
priority_queue<int,vector<int>,greater<int>>q;
int main(){
  cin>> n >> s >> a >> b;
  for(int i=1;i<=n;i++){
    int x,y;
    cin>> x >> y;
    if(a+b>=x)q.push(y);
  }
  if(q.empty()){
    cout<< 0;
  }
  int cnt=0;
  while(!q.empty()){
    s-=q.top();
    q.pop();
    cnt++;
    if(s<0||q.empty()){
      cout<< --cnt;
      break;
    }
  }
  return 0;
}