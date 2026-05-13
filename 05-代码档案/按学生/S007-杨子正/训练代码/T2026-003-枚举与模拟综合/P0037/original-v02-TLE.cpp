#include <bits/stdc++.h>

#define int long long

using namespace std;

const int kMaxN = 1e5 + 100;
int n, a[kMaxN];
map<int, int> mp;

int qp(int x, int y) 
{
  if (!y) 
  {
    return 1;
  }
  int tmp = qp(x, y / 2);
  if (y & 1) 
  {
    return tmp * tmp * x;
  }
  return tmp * tmp;
}

signed main() 
{
  cin >> n;
  int ans = 0;
  for (int k = 1; k <= n; k++) 
  {
    cin >> a[k];
    for (int i = 1; i <= 32; i++) 
    {
      if (mp[qp(2, i) - a[k]]) 
      {
        ans += mp[qp(2, i) - a[k]];
      }
    }
    mp[a[k]]++;
  }
  cout << ans;
  return 0;
}