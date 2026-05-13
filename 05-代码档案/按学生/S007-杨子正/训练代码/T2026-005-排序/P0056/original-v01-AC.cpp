#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 100005;
struct node
{
  int l, r;
} a[kMaxN];

bool cmp(const node &x, const node &y)
{
  if (x.l == y.l)
  {
    return x.r < y.r;
  }
  return x.l < y.l;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i].l >> a[i].r;
  }
  sort(a + 1, a + 1 + n, cmp);
  for (int i = 1; i <= n; i++)
  {
    cout << a[i].l << " " << a[i].r << "\n";
  }
  return 0;
}