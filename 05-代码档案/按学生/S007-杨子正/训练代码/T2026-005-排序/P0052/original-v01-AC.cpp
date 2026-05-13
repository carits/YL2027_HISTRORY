#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 100005;
struct Node
{
  int a, id;
} a[kMaxN];

bool cmp(const Node &x, const Node &y)
{
  return x.a < y.a;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i].a;
    a[i].id = i;
  }

  sort(a + 1, a + 1 + n, cmp);

  for (int i = 1; i <= n; i++)
  {
    cout << a[i].id << " ";
  }
  return 0;
} 