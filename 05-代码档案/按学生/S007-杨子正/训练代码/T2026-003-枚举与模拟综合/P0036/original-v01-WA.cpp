#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main()
{
  int a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = 2; i <= 62; i++)
  {
    int t = pow(2, i) - 1;
    for (int j = i - 2; j >= 0; j--)
    {
      int tt = t - pow(2, j);
      if (tt >= a && tt <= b)
      {
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}