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
    
    int ans = -1;
    
    for (int d = 1; d * d <= b; d++) 
    {
      if (b % d == 0) 
      {
        int k1 = d;
        int k2 = b / d;
        
        if ((a * k1 + b / k1) % 2 == 0) 
        {
          ans = max(ans, a * k1 + b / k1);
        }

        if ((a * k2 + b / k2) % 2 == 0) 
        {
          ans = max(ans, a * k2 + b / k2);
        }
      }
    }
    
    cout << ans << "\n";
  }
  return 0;
}