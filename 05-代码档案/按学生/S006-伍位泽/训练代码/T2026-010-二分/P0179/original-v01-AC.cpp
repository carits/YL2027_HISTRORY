#include <bits/stdc++.h>
using namespace std;
int a[100005] , b[100005];
int n , v , cnt=0 , sum=0 , maxn=0;
int main ( )
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 cin >> n;
 cin >> a[1];
 sum=1;
 for (int i=2;i<=n;i++)
 {
  cin >> a[i];
  if (a[i]==a[i-1])
  {
   sum++;
  }
  else
  {
   cnt++;
   b[cnt]=sum;
   sum=1;
  }
 }
 cnt++;
 b[cnt]=sum;
 sum=0;
 for (int i=1;i<=cnt-1;i++)
 {
  maxn=max (maxn , min (b[i] , b[i+1]));
 }
 cout << maxn*2;
 return 0;
}