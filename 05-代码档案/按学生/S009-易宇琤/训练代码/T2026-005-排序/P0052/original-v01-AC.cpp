#include <bits/stdc++.h>

using namespace std;

const int kN = 1e5 + 5;

struct Node
{
  int id;
  int num;
} a[kN];

int n;

bool Cmp(const Node &x, const Node &y)
{
  return x.num < y.num;
}

int main()
{
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> a[i].num;
    a[i].id = i;
  }

  sort(a + 1, a + 1 + n, Cmp);

  for(int i = 1; i <= n; i ++)
  {
    cout << a[i].id << " ";
  }
  return 0;
}