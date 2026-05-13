#include <bits/stdc++.h>

#define int long long

using namespace std;

const int kN = 2e5 + 5;

int a[kN];

void work()
{
  int n;
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> a[i];
  }

  int ans = 0;

  for(int i = 1; i <= n; i ++)
  {
    int j;
    if((2 * i + 1) % a[i] == 0)
    {
      j = i + 1;
    }
    else
    {
      j = i + 1 + a[i] - ((2 * i + 1) % a[i]) % a[i];
    }
    for(; j <= n; j += a[i])
    {
      if(a[i] * a[j] == i + j)
      {
        ans ++;
      }
    }
  }

  cout << ans << "\n";
}

signed main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while(t --)
  {
    work();
  }

  return 0;
}