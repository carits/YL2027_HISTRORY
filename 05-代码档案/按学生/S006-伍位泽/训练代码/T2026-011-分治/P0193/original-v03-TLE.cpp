#include <bits/stdc++.h>
using namespace std;
string a , b;
bool F (string s , string t)
{
  if (s==t) return 1;
  int k=s.size ( );
  if (k%2==1) return 0;
  string aa=s.substr (0 , k/2) , ab=s.substr  (k/2 , k/2) , ba=t.substr (0 , k/2) , bb=t.substr (k/2 , k/2);
  return (F (aa , ba)&&F (ab , bb))||(F (aa , bb)&&F (ab , ba));
}
int main ( )
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> a >> b;
  if (a==b)
  {
    cout << "YES";
    return 0;
  }
  if (F (a , b)==0)
  {
    cout << "NO";
  }
  else
  {
    cout << "YES";
  }
  return 0;
}