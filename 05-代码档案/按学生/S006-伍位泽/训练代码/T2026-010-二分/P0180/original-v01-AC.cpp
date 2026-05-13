#include <bits/stdc++.h>
using namespace std;
long long P;
int q , n , f , t , p;
bool sf (int k)
{
  long long sum=0;
  sum+=(long long) (n-k)*f;
  sum+=(long long) min ((n-k)*2 , p)*t;
  if (sum>=P) return 1;
  return 0;
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> q;
  while (q--)
  {
    cin >> n >> P >> f >> t;
    p=(n+6)/7;
    int l=0 , r=n;
    while (l<r)
    {
      int mid=(long long) (l+r+1)/2;
      if (sf (mid)==1)
      {
        l=mid;
       } 
       else
       {
         r=mid-1;
       }
    }
    cout << l << "\n";
  }
  return 0; 
}