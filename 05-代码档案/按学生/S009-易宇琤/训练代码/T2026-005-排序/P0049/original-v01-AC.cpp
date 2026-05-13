#include <bits/stdc++.h>

using namespace std;

const int kN = 305;

struct Node
{
  int id;
  int yw, yy, sx;
  int zong;
} a[kN];

int n;

bool Cmp(const Node &x, const Node &y)
{
  if(x.zong != y.zong)
  {
    return x.zong > y.zong;
  }
  if(x.yw != y.yw)
  {
    return x.yw > y.yw;
  }
  return x.id < y.id;
}

int main()
{
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> a[i].yw >> a[i].sx >> a[i].yy;
    a[i].id = i;
    a[i].zong = a[i].yw + a[i].sx + a[i].yy;
  }

  sort(a + 1, a + 1 + n, Cmp);

  for(int i = 1; i <= 5; i ++)
  {
    cout << a[i].id << " " << a[i].zong << "\n";
  }
  return 0;
}