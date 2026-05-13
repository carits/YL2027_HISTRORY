#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve()
{
  int a1, K;
  cin >> a1 >> K;

  int i;
  while (--K)
  {
    i = a1;
    int maxx = 0, minn = 10;
    while (i)
    {
      maxx = max(maxx, i % 10);
      minn = min(minn, i % 10);
      i /= 10;
    }
    if (maxx * minn == 0)
    {
      break;
    }
    a1 += maxx * minn;
  }
  
  cout << a1 << "\n";
}

signed main() 
{
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}