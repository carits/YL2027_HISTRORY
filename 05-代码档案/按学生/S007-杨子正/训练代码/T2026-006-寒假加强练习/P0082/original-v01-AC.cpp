#include <bits/stdc++.h>

#define int long long

using namespace std;

int n, a[200005], b[200005];

void solve() 
{
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  for (int i = 1; i <= n; i++) cin >> b[i];
  sort(a + 1, a + n + 1, greater<int>());
  int sum = 0, ans = 0;
  for (int i = 1; i <= n; i++) 
  {
    sum += b[i];
    if (sum > n) break;
    ans = max(ans, a[sum] * i);
  }
  cout << ans << "\n";
}

signed main()
{
  int T;
  cin >> T;
  while (T--) solve();
  return 0;
}