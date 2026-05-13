#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() 
{
  int t;
  cin >> t;
  
  while (t--) 
  {
    int a, b;
    cin >> a >> b;
    
    if (a % 2 == 0 && b % 2 == 1) 
    {
      cout << -1 << endl;
      continue;
    } else if (a % 2 == 0 && b % 2 == 0) 
    {
      cout << a * (b / 2) + 2 << endl;
    } else if (a % 2 == 1 && b % 2 == 1) 
    {
      cout << a * b + 1 << endl;
    } else 
    {
      if (b % 4 != 0) 
      {
        cout << -1 << endl;
      } else 
      {
        cout << a * (b / 2) + 2 << endl;
      }
    }
  }
  
  return 0;
}