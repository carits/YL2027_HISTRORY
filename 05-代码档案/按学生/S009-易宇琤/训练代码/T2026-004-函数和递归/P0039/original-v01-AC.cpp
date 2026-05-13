#include <bits/stdc++.h>

using namespace std;

int n;
string x, y;

bool Pd(string s1, string s2)
{
  for(int i = 0; i < n; i ++)
  {
    if(x[i] < y[i])
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  cin >> n >> x >> y;

  if(Pd(x, y) == 1)
  {
    cout << y;
  }
  else cout << -1;

  return 0;
}