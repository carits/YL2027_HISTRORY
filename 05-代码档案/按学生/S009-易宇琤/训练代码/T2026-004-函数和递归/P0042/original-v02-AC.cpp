#include <bits/stdc++.h>

using namespace std;


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int t;
  cin >> t;

  while(t --)
  {
    int x, ans = 3;
    cin >> x;
    for(int i = 1; i <= x; i ++)
    {
      ans = (ans - 1) * 2;
    }
    cout << ans << "\n";
  }
  return 0;
}