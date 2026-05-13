#include <bits/stdc++.h>
using namespace std;
struct node 
{
  int id, c, m, e, sum;
} a[305];
bool cmp(node x, node y) 
{
  if (x.sum == y.sum && x.c == y.c)
    return x.id < y.id;
  if (x.sum == y.sum)
    return x.c > y.c;
  return x.sum > y.sum;
}
int main() 
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) 
  {
    cin >> a[i].c >> a[i].m >> a[i].e;
    a[i].id = i;
    a[i].sum = a[i].c + a[i].m + a[i].e;
  }
  sort(a + 1, a + 1 + n, cmp);
  for (int i = 1; i <= 5; i++)
    cout << a[i].id << ' ' << a[i].sum << '\n';
	return 0;
}