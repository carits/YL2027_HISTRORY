#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  int ans = 0;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (i * 2 + j * 4 == n)
      {
        ans++;
      }
    }
  }
  cout << ans << "\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}