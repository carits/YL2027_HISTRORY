#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int t[N];
int t2[N];
struct node 
{
  int t, i, num;
} a[N];
bool cmp(node a, node b) 
{
  return a.t < b.t;
}
bool cmp2(node a, node b) 
{
  return a.i < b.i;
}
signed main() 
{
  int T;
  cin >> T;
  while (T--) 
  {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) 
      t[i] = t2[i] = 0;
    for (int i = 1; i <= n; i++) 
    {
      cin >> a[i].t;
      t[a[i].t]++;
    }
    bool flag = true;
    for (int i = 1; i <= n; i++) 
      if (t[i] % i != 0) 
      {
        cout << -1 << endl;
        flag = false;
        break;
      }
    if (!flag) continue;
    for (int i = 1; i <= n; i++) 
      a[i].i = i;
    sort(a + 1, a + n + 1, cmp);
    int cnt = 0;
    for (int i = 1; i <= n; i++) 
    {
      if (t2[a[i].t] % a[i].t == 0) 
        cnt++;
      a[i].num = cnt;
      t2[a[i].t]++;
    }
    sort(a + 1, a + n + 1, cmp2);
    for (int i = 1; i <= n; i++) 
      cout << a[i].num << ' ';
    cout << endl;
  }
  return 0;
}