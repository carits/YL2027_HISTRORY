#include <bits/stdc++.h>
using namespace std;
int a[100005] , b[100005];
int n , k;
bool sf (int p)
{
  long long sum=0;
  for (int i=1;i<=n;i++)
  {
    if (b[i]>=(long long) a[i]*p) continue;
    sum+=(long long) a[i]*p-b[i];
    if (sum>k) return 0;
  }
  return 1;
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  for (int i=1;i<=n;i++)
  {
    cin >> a[i];
  }
  for (int i=1;i<=n;i++)
  {
    cin >> b[i];
  }
  int l=0 , r=2e9;
  while (l<r)
  {
    int mid=l/2+r/2+1;
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