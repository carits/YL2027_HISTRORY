#include <bits/stdc++.h>
#define int long long

using namespace std;

const int kN = 2e5 + 5;

int b[kN], c[kN];

void work()
{
  int n, m, h;
  cin >> n >> m >> h;
  
  const int N = n + 1, M = m + 1;
  int a[N][M];
  for(int i = 1; i <= n; i ++)
  {
    for(int j = 1; j <= m; j ++)
    {
      cin >> a[i][j];
    }
  }

  memset(b, 0, sizeof b);
  memset(c, 0, sizeof c);
  for(int i = 1; i <= n; i ++)
  {
    sort(a[i] + 1, a[i] + 1 + m);

    int cnt = 0;
    for(int j = 1; j <= m; j ++)
    {
      if(cnt + a[i][j] <= h)
      {
        b[i] ++;
        cnt += a[i][j];
        c[i] += cnt;
      }
      else break;
    }
  }

  int ans = 1;
  for(int i = 1; i <= n; i ++)
  {
    if(b[i] > b[1])
    {
      ans ++;
    }
    else if(b[i] == b[1] && c[i] > c[1])
    {
      ans ++;
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