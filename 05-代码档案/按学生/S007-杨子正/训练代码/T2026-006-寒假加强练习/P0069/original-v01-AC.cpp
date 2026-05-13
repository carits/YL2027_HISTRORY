#include <bits/stdc++.h>

using namespace std;

void solve() 
{
  int n, k; 
  cin >> n >> k;
  for (int i = 0; (k - 1) * (1 << i) < n; ++i) 
  {
    if (n < (k + 1) * (1 << i)) 
    {
      cout << i << "\n";
      return;
    }
  }
  cout << -1 << "\n";
}

signed main() 
{
  int T; 
  cin >> T;
  while (T--) 
  {
    solve();
  }
  return 0;
}