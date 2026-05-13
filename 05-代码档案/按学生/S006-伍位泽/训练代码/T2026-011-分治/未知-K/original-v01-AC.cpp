#include <bits/stdc++.h>
using namespace std;
string s;
long long t , k , pos;
int n;
char F (long long t , long long k , char s)
{
  if (t==0) return s;
  long long len=1LL<<(t-1);
  if (len>=k)
  {
    return F (t-1 , k , (s-'A'+1)%3+'A');
  }
  else
  {
    return F (t-1 , k-len , (s-'A'+2)%3+'A'); 
  }
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
   cin >> s >> n;
   while (n--)
   {
     cin >> t >> k;
     if (t>=63) t=t%3+60;
     pos=(k+(1LL<<t)-1)/(1LL<<t);
     cout << F (t , k-(pos-1)*(1LL<<t) , s[pos-1]) << "\n";
  }
  return 0;
}