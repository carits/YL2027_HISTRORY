#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int a;
  cin >> a;
  int ans = 3;
  for (int i = 1; i <= a; i++)
  {
    ans--;
    ans *= 2;
  }
  cout << ans << "\n";
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    solve();
  }
  return 0;
}