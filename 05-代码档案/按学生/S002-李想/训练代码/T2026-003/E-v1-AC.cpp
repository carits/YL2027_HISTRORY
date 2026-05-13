#include<bits/stdc++.h>
using namespace std;
#define int long long

int ans;
int const N=20;
int a[N][N];
int dx[]={-2,-2,2,2,-1,-1,1,1};
int dy[]={1,-1,1,-1,2,-2,2,-2};
string a1,b1;
signed main(){
  cin>> a1 >> b1;
  a[a1[0]-'a'+1][a1[1]-'0']=1;
  a[b1[0]-'a'+1][b1[1]-'0']=2;
  for(int i=1;i<=8;i++){
    for(int j=1;j<=8;j++){
      if(a[i][j])continue;
      bool p=0;
      for(int k=1;k<=8;k++){
        if(a[k][j]==1||a[i][k]==1)p=1;
      }
      for(int k=0;k<8;k++){
        int nx=i+dx[k],ny=j+dy[k];
        if(nx<1||nx>8||ny<1||ny>8)continue;
        if(a[nx][ny])p=1;
      }
      if(p)continue;
      ans++;
    }
  }
  cout<< ans;
  return 0;
}