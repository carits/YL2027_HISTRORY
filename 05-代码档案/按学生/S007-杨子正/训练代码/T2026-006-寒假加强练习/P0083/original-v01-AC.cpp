#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 1e5 + 5;
int f[65][65];

void solve() 
{
  long long n, k;
  cin >> n >> k;
  if (k > 60) 
  {
    cout << 0 << "\n";
    return;
  }
  long long d = 0;
  long long t = n;
  while (t > 1) 
  {
    t >>= 1;
    d++;
  }
  for (int i = 0; i <= d; i++) 
  {
    for (int j = 0; j <= k; j++) 
    {
      f[i][j] = 0;
    }
  }
  for (int j = 1; j <= k; j++) 
  {
    f[0][j] = 1;
  }
  for (int i = 1; i <= d; i++) 
  {
    for (int j = 1; j <= k; j++) 
    {
      long long tt = 0;
      if (j >= 2) 
      {
        tt = 1 + f[i - 1][j - 2];
        if (i <= j - 2) 
        {
          tt--;
        }
      } else if (j == 1) 
      {
        tt = 1;
      }
      f[i][j] = f[i - 1][j - 1] + tt;
    }
  }
  cout << n - f[d][k] << "\n";
}
int main() 
{
  int T;
  cin >> T;
  while (T--) 
  {
    solve();
  }
  return 0;
}