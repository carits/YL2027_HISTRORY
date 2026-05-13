#include <bits/stdc++.h>

using namespace std;

const int kN = 15;

int a[kN], b[kN];
bool vis[kN];

void work()
{
  int n, sum = 0;
  memset(vis, 0, sizeof vis);
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> a[i];
    sum += a[i];
  }

  for(int i = 1; i <= n; i ++)
  {
    int cur = i, s = sum;
    for(int i = 1; i <= n; i ++)
    {
      b[i] = a[i];
    }
    while(1)
    {
//      cout << cur << "\n";
      if(b[cur] == 0)
      {
        cur = cur % n + 1;
        continue;
      }
      b[cur] --;
      s --;
      if(s == 0)
      {
        vis[cur] = 1;
        break;
      }
      cur = cur % n + 1;
    }
  }

  int ans = 0;
  for(int i = 1; i <= n; i ++)
  {
    if(vis[i] == 1)
    {
      ans ++;
    }
  }
  cout << ans << "\n";
}

int main()
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