#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 2e5 + 5;
int a[kMaxN];

void solve()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  sort(a + 1, a + 1 + n);
  cout << max(a[1], a[2] - a[1]) << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}