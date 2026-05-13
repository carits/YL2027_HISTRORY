#include <bits/stdc++.h>

using namespace std;

int n, m, q;
int ans;
string s, t;

int main()
{
  cin >> n >> m >> q >> s >> t;

  while(q --)
  {
    int l, r;
    cin >> l >> r;

    string p = s.substr(l - 1, r - l + 1);
    int last = p.find(t, 0);
    ans = 0;
    while(last != -1)
    {
      last = p.find(t, last + 1);
      ans ++;
    }
    cout << ans << "\n";
  }

  return 0;
}