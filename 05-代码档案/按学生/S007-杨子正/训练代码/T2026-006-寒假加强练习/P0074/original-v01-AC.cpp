#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 2e5 + 5;
long long a[kMaxN];

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    
    int l = -1, r = -1;
    for (int i = 1; i <= n; i++) 
    {
      if (a[i] != -1) 
      {
      l = i;
      break; 
      }
    }
    for (int i = n; i >= 1; i--) 
    {
      if (a[i] != -1) 
      {
      r = i;
      break;
      }
    }
    
    if (l == -1) 
    {
      cout << "0\n";
      for (int i = 1; i <= n; i++)
      {
        cout << "0 ";
      }
      cout << "\n";
      continue;
    }
    
    if (a[1] == -1)
    {
      a[1] = (a[n] != -1 ? a[n] : 0);
    }
    if (a[n] == -1)
    {
      a[n] = a[1];
    }

    cout << abs(a[n] - a[1]) << "\n";
    
    for (int i = 1; i <= n; i++) 
    {
      if (a[i] == -1) a[i] = 0;
      cout << a[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}