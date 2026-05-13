#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '0')
      {
        ans += 1;
      }
    }
    cout << ans << endl;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '0')
      {
        cout << i + 1 << " ";
      }
    }
    cout << endl;
  }
  return 0;
}