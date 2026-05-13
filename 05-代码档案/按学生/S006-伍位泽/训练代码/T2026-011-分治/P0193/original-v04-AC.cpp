#include <bits/stdc++.h>
using namespace std;
string a , b;
string F (string s)
{
  int k=s.size ( );
  if (k%2==1) return s;
  string aa=s.substr (0 , k/2) , bb=s.substr  (k/2 , k/2);
  aa=F (aa) , bb=F (bb);
  if (aa+bb>bb+aa) swap (aa , bb);
  return aa+bb;
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> a >> b;
  a=F (a) , b=F (b);
  if (a==b)
  {
    cout << "YES";
  } 
  else
  {
    cout << "NO";
  }
  return 0;
}