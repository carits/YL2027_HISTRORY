#include <bits/stdc++.h>

using namespace std;

int a[200007];

void solve()
{
  int n, ans, c;
  int m = 0, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 2; i <= n - 1; i++)
  {
    sum += abs(a[i-1]-a[i]);
    int x = abs(a[i-1]-a[i]) + abs(a[i]-a[i+1]);
    int y = abs(a[i-1]-a[i+1]);
    m = max(m, x - y);
  }
  sum += abs(a[n-1]-a[n]);
  c = max({m, abs(a[1] - a[2]), abs(a[n-1] - a[n])});
  ans = sum - c;
  cout << ans << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}