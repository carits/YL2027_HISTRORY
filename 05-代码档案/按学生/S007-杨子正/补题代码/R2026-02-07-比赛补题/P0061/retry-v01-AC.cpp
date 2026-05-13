#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int n, x, y;
  cin >> n >> x >> y;
  string s;
  cin >> s;
  
  int res = 0;
  for (int i = 0; i < x; i++) 
  {
    int pos = n - 1 - i;
    if (i == y) 
    {
      if (s[pos] != '1') res++;
    } else 
    {
      if (s[pos] != '0') res++;
    }
  }
  
  cout << res << "\n";
  return 0;
}