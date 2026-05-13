#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 1e5 + 5;
int a[kMaxN];

void solve()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int sum = a[i]; sum <= i + n; sum += a[i])
    {
      int j = sum - i;

      if (i < j && a[i] * a[j] == i + j)
      {
        ans++;
      }
    }
  }

  cout << ans << "\n";
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}