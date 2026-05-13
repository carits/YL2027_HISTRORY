#include <bits/stdc++.h>
using namespace std;
int v[200005];
int szh (int n)
{
  int sum=0;
  while (n!=0)
  {
    sum+=n%10;
    n/=10;
  }
  return sum;
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  for (int i=1;i<=200000;i++)
  {
    v[i]=v[i-1]+szh (i);
  }
  int t , n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cout << v[n] << "\n";
  }
  return 0;
}