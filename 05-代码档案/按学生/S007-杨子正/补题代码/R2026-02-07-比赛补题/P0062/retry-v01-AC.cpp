#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 2e5 + 5;
int a[kMaxN];

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  sort(a + 1, a + 1 + n);
  int ans = 0;
  for (int i = 1, day = 1; i <= n; i++)
  {
    if (a[i] >= day)
    {
      ans++, day++;
    }
  }
  cout << ans;
  return 0;
}