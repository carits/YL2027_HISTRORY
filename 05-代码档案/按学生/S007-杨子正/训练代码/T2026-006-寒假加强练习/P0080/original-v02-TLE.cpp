#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
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
        int v1 = a * k1 + b / k1;
        if (v1 % 2 == 0) ans = max(ans, v1);
        
        int k2 = b / d;
        if (k2 != k1) 
        {
          int v2 = a * k2 + b / k2;
          if (v2 % 2 == 0) ans = max(ans, v2);
        }
      }
    }
    
    cout << ans << "\n";
  }
  return 0;
}