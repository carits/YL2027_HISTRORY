#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int k, x;
    cin >> k >> x;
    
    int a[5000], b[5000];
    int n = 1;
    a[0] = x;
    
    for (int i = 0; i < k; i++) 
    {
      int m = 0;
      for (int j = 0; j < n; j++) 
      {
        int v = a[j];
        b[m++] = v * 2;
        if (v > 1 && (v - 1) % 3 == 0) 
        {
          int p = (v - 1) / 3;
          if (p % 2 == 1) 
          {
            b[m++] = p;
          }
        }
      }
      n = m;
      for (int j = 0; j < n; j++) a[j] = b[j];
    }
    
    cout << a[0] << "\n";
  }
  return 0;
}