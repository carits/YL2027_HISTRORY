#include <bits/stdc++.h>

#define int long long

using namespace std;

bool check(int x)
{
  int ans = 0;
  while (x)
  {
    if (x % 2 == 0)
    {
      ans++;
    }
    x /= 2;
  }
  return ans == 1;
}

signed main()
{
  int a, b;
  cin >> a >> b;
  int ans = 0;
  for (int i = a; i <= b; i++)
  {
    if (check(i))
    {
      ans++;
    }
  }
  cout << ans;
  return 0;
}