#include <bits/stdc++.h>
using namespace std;
int n;
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  int l=1 , r=1e5;
  while (l<r)
  {
    int mid=(l+r)/2;
    if ((long long) mid*mid>=n)
    {
      r=mid;
    }
    else
    {
      l=mid+1;
    }
  }
  while (l*(r-1)>=n)
  {
    r--;
  }
  cout << l+r;
  return 0;
 }