#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 100005;
struct node
{
  int x, id, w;
} a[kMaxN];

bool cmp(const node &x, const node &y)
{
  return x.x < y.x;
}

bool cmp_(const node &x, const node &y)
{
  return x.id < y.id;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i].x;
    a[i].id = i;
  }
  sort(a + 1, a + n + 1, cmp);
  for (int i = 1; i <= n; i++)
  {
    a[i].w = i;
  }
  sort(a + 1, a + 1 + n, cmp_);
  for (int i = 1; i <= n; i++)
  {
    cout << a[i].w << " ";
  }
  return 0;
}