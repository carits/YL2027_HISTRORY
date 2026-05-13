#include <bits/stdc++.h>

#define int long long

using namespace std;

const int kN = 10 + 5;

int vis[kN];

void work()
{
  int n, ans = 0;
  string s;
  cin >> n >> s;

  for(int i = 0; i < n; i ++)
  {
    int cnt = 0, maxn = 0;
    memset(vis, 0, sizeof vis);
    for(int j = i; j < min(i + 100, n); j ++)
    {
      vis[s[j] - '0'] ++;
      if(vis[s[j] - '0'] == 1)
      {
        cnt ++;
      }
      maxn = max(maxn, vis[s[j] - '0']);
      if(maxn <= cnt)
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