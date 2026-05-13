#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 1e3 + 50;
int f[kMaxN];

int main()
{
  int n, m, q;
  string a, b;
  cin >> n >> m >> q >> a >> b;

  int i = 0;
  while (true)
  {
    if (a.find(b, i) > n)
    {
      break;
    }
    i = a.find(b, i);
    f[++i] = 1;
  }
  for (int i = 1; i <= n; i++)
  {
    f[i] = f[i - 1] + f[i];
  }

  while (q--)
  {
    int l, r;
    cin >> l >> r;

    if (r - l + 1 < m)
    {
      cout << "0\n";
    } else
    {
      cout << f[r - m + 1] - f[l - 1] << "\n"; 
    }
  }
  return 0;
}