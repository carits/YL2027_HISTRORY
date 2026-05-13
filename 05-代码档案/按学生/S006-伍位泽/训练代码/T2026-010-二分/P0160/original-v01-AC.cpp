#include <bits/stdc++.h>
using namespace std;
int n , m , k;
bool sf (int p)
{
  long long sum=0;
  for (int i=k,tmp=p;i>=1;i--,tmp--)
  {
    if (tmp==0)
    {
      sum+=i;
      break;
    }
    sum+=tmp;
    if (sum>m) return 0;
  }
  for (int i=k+1,tmp=p-1;i<=n;i++,tmp--)
  {
    if (tmp==0)
    {
      sum+=(n-i+1);
      break;
    }
    sum+=tmp;
    if (sum>m) return 0;
  }
  if (sum<=m) return 1;
  return 0;
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m >> k;
  int l=1 , r=m;
  while (l<r)
  {
    int mid=(l+r+1)/2;
    if (sf (mid)==1)
    {
      l=mid;
    }
    else
    {
      r=mid-1;
    }
  }
  cout << l;
  return 0;
}