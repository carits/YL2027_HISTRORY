#include <bits/stdc++.h>
using namespace std;
struct node
{
  int a , b; 
};
node v[300005] , a[300005] , b[300005];
int n , maxn=0;
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i=1;i<=n;i++)
  {
    cin >> v[i].a >> v[i].b;
  }
  a[0].a=-1e9 , a[n+1].b=1e9;
  for (int i=1;i<=n;i++)
  {
    a[i].a=max (a[i-1].a , v[i].a);
    a[i].b=min (a[i-1].b , v[i].b);
  }
  b[0].a=-1e9 , b[n+1].b=1e9;
  for (int i=n;i>=1;i--)
  {
    b[i].a=max (b[i+1].a , v[i].a);
    b[i].b=min (b[i+1].b , v[i].b);
  }
  for (int i=1;i<=n;i++)
  {
    maxn=max (maxn , max (a[i-1].a , b[i-1].a)-min (a[i-1].b , b[i-1].b));
  }
  cout << maxn;
  return 0;
}