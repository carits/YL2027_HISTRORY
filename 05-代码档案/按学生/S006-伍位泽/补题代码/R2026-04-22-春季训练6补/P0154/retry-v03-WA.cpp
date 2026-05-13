#include <bits/stdc++.h>
using namespace std;
int a[2005] , b[2005] , v[100005];
int Q , n , k , d , maxn=0;
void sl (int p)
{
  for (int i=1;i<=n;i++)
  {
    b[i]=a[i];
  }
  int cnt=0;
  for (int i=1;i<=p;i++)
  {
    int lll=i%k+1;
    for (int j=1;j<=v[lll];j++)
    {
      b[j]++;
    }
  }
  for (int i=1;i<=n;i++)
  {
    if (b[i]==i) cnt++;
  }
  cnt+=(d-p-1)/2;
  maxn=max (maxn , cnt);
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> Q;
  while (Q--)
  {
    cin >> n >> k >> d;
    maxn=0;
    for (int i=1;i<=n;i++)
    {
      cin >> a[i];
    }
    for (int i=1;i<=k;i++)
    {
      cin >> v[i];
    }
    for (int i=0;i<=min (d-1 , n*2);i++)
    {
      sl (i);
    }
    cout << maxn << "\n";
  }
  return 0;
}