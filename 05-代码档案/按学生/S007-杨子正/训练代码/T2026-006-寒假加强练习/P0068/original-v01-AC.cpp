#include <bits/stdc++.h>

using namespace std;

int main() 
{
  int T;
  cin >> T;
  while (T--) 
  {
    int s, k, m;
    cin >> s >> k >> m;
    if (s <= k) cout << max(s - m % k, 0) << "\n";
    else 
    {
      if (m / k % 2) cout << max(k - m % k, 0) << "\n";
      else cout << max(s - m % k, 0) << "\n";
    }
  }
  return 0;
}