#include <bits/stdc++.h>
using namespace std;
int s[100005];
int n , k , a , b;
int mi (int p)
{
  int mul=1;
  while (p--)
  {
    mul*=2;
  }
  return mul;
}
int F (int x , int y)
{
  if (x==y)
  {
    int pos=lower_bound (s+1 , s+k+1 , x)-s;
    if (s[pos]==x)
    {
      return b;
    }
    else
    {
      return a;
    }
  }
  int mid=(x+y)/2 , aa=lower_bound (s+1 , s+k+1 , x)-s , bb=upper_bound (s+1 , s+k+1 , y)-s-1;
  if (bb-aa+1==0) return min (F (x , mid)+F (mid+1 , y) , a);
  return min (F (x , mid)+F (mid+1 , y) , b*(bb-aa+1)*(y-x+1));
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
   cin >> n >> k >> a >> b;
   for (int i=1;i<=k;i++)
   {
     cin >> s[i];
   }
   n=mi (n);
   cout << F (1 , n);
  return 0;
}