#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 3e5 + 3e4;
const int inf = 1e18;

int n, ans = -inf;
int a[N];
int pre[N];
int le, ri;

map <int, int> lef;
map <int, int> rig;

signed main()
{
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
    pre[i] = pre[i - 1] + max(a[i], 0ll);
    if(lef[a[i]] == 0)
      lef[a[i]] = i;
    rig[a[i]] = i;
  }
  for(int i = 1; i <= n; i++)
  {
    int l = lef[a[i]];
    int r = rig[a[i]];
    if(l == r)
      continue;
    if(a[i] >= 0)
    {
      if(pre[r] - pre[l - 1] > ans)
      {
        ans = pre[r] - pre[l - 1];
        le = l, ri = r;
      }
    }
    else
    {
      if(pre[r] - pre[l - 1] + 2ll * a[i] > ans)
      {
        ans = pre[r] - pre[l - 1] + 2ll * a[i];
        le = l, ri = r;
      }
    }
  }
  cout << ans << " ";
  queue <int> q;
  for(int i = 1; i <= le - 1; i++)
    q.push(i);
  for(int i = le + 1; i <= ri - 1; i++)
  {
    if(a[i] < 0)
    {
      q.push(i);
    }
  }
  for(int i = ri + 1; i <= n; i++)
    q.push(i);
  cout << q.size() << "\n";
  while(!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  return 0;
}