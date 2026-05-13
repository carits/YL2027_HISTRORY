#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 10005, kMaxM = 15;
struct node
{
  int s[kMaxM];
} a[kMaxN];

int m;
bool cmp(const node &x, const node &y)
{
  for (int i = 1; i <= m; i++)
  {
    if (x.s[i] != y.s[i])
    {
      return x.s[i] > y.s[i];
    }
  }
  return false;
}

int main()
{
  int n;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> a[i].s[j];
    }
  }
  sort(a + 1, a + 1 + n, cmp);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cout << a[i].s[j] << " ";
    }
    cout << "\n";
  }
  return 0;
} 