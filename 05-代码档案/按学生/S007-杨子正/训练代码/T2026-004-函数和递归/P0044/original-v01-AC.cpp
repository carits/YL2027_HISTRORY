#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      int d[10] = {0}, mx = 0, di = 0;
      for (int j = i; j < min (i + 101, n); j++)
      {
        d[s[j] - '0']++;
        if (d[s[j] - '0'] == 1)
        {
          di++;
        }
        mx = max (mx, d[s[j] - '0']);
        if (mx <= di)
        {
          ans++;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}