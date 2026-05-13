#include <bits/stdc++.h>

#define int long long

using namespace std;

const int kMaxN = 5e5 + 5;
int a[kMaxN];
int tmp[kMaxN];
int ans = 0;

void work(int l, int r)
{
  int m = (l + r) >> 1;
  if (l == r)
  {
    return ;
  }
  work(l, m), work(m + 1, r);
  for (int i = l, j = m + 1, k = l; k <= r; k++)
  {
    if(i <= m && (j > r || a[i] <= a[j]))
    {
      tmp[k] = a[i++];
    } else
    {
      tmp[k] = a[j++];
    }
  }
  for (int i = l; i <= r; i++)
  {
    a[i] = tmp[i];
  }
}

signed main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  work(1, n);
  for (int i = 1; i <= n; i++)
  {
    cout << tmp[i] << " ";
  }
  return 0;
} 