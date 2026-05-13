#include <bits/stdc++.h>

using namespace std;

int n, m, q;
string s, t;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m >> q >> s >> t;

  int l, r;
  while(q --)
  {
    cin >> l >> r;

    string p = s.substr(l - 1, r - l + 1);
    int last = p.find(t, 0), ans = 0;
    while(last != -1)
    {
      last = p.find(t, last + 1);
      ans ++;
    }
    cout << ans << "\n";
  }

  return 0;
}