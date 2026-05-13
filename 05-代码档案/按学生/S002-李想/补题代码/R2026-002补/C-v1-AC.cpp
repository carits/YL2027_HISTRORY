#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,n,m,h;
struct node{
  int x,y;
};
void slove(){
  cin>> n >> m >> h;
//  if(n==5&&m==5&&h==14){
//      cout<< 2 << "\n";
//      return;
//  }
  int const N=n+5,M=m+5;
  int a[N][M];
  node an[N];
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)cin>> a[i][j];
  }
  for(int i=1;i<=n;i++){
    sort(a[i]+1,a[i]+m+1);
    int nh=h,cnt=0,p=0;
    //1 2 3 4
    //1+3+6+10
    an[i].y=0;
    for(int j=1;j<=m;j++){
      if(a[i][j]<=nh){
       nh-=a[i][j],cnt+=a[i][j],an[i].y+=cnt;
//       cout<< an[i].y << " ";
      }else{
        an[i].x=j-1;
        p=1;
        break;
      }
    }
    if(p==0)an[i].x=m;
//    cout<< an[i].x << "  " << an[i].y << "\n"; 
  }
//  cout<< "\n";
  int ans=1;
  for(int i=2;i<=n;i++){
    if(an[1].x<an[i].x)ans++;
    if(an[1].x==an[i].x&&an[1].y>an[i].y)ans++;
  }
  cout<< ans << "\n";
}
signed main(){
  cin>> t;
  while(t--)slove();
  return 0;
}
//5 5 14
//7 2 9 10 3  21=2+(2)
//5 3 2 9 7   19
//6 1 10 5 7  20
//2 6 9 10 4//
//10 5 7 8 9