#include <bits/stdc++.h>

using namespace std;

int t;
bool flag[200010];

int main() 
{
  cin >> t;
  while (t--) 
  {
    string s;
    cin >> s;
    int minn = 1e9;
    for (char c = 'a'; c <= 'z'; c++) 
    {
      int cnt = 0;
      memset(flag, 1, sizeof flag);
      while (1) {
        bool f = 1;
        for (int i = 0; i < s.size(); i++)
        {
          if (flag[i] && s[i] != c)
          {
            f = 0;
          }
        }
        if (f)
        {
          break;
        }
        cnt++;
        f = 0;
        for (int i = 0; i < s.size(); i++) 
        {
          if (!f && s[i] != c && flag[i])
          {
            flag[i] = 0, f = 1;
          } else if (flag[i])
          {
            f = 0;
          }
        }
      }
      minn = min(minn, cnt);
    }
    cout << minn << "\n";
  }
  return 0;
}