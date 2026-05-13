#include <bits/stdc++.h>

using namespace std;

struct node
{
  int a, b;
} c[5005];
bool cmp(node x, node y)
{
  return x.b < y.b;
}

int main()
{
  int n, s, a, b;
  cin >> n >> s >> a >> b;
  for (int i = 1; i <= n; i++)
  {
    cin >> c[i].a >> c[i].b;
  }

  sort(c + 1, c + 1 + n, cmp);

  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if (c[i].a <= a + b)
    {
      s -= c[i].b;
      if (s < 0)
      {
        break;
      }
      ans++;
    }
  }

  cout << ans;
  return 0;
} 