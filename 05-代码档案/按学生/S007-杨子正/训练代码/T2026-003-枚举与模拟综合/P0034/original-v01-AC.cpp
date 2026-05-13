#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n, k;
    cin >> n >> k;

    int d = 1;
    int cnt = 0;
    while (k - d >= 0) 
    {
      cnt++;
      k -= d;
      d++;
    }
    string ans(n, 'a');
    if (k) 
    {
      ans[n - 2 - cnt] = 'b';
      ans[n - k] = 'b';
    } else 
    {
      ans[n - 1 - cnt] = 'b';
      ans[n - cnt] = 'b';
    }

    cout << ans << '\n';
  }
  return 0;
}