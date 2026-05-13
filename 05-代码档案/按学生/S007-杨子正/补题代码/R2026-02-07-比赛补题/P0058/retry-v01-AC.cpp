#include <bits/stdc++.h>

#define int long long

using namespace std;

int t, a, b;
string s;

signed main() 
{
  cin >> t;
  while (t--) {
    cin >> a >> b >> s;
    bool flag = 1;
    for (int i = 0, j = s.size() - 1; i <= j; i++, j--) 
    {
      if (s[i] != '?' && s[j] != '?' && s[i] != s[j]) 
      {
        cout << "-1\n";
        flag = 0;
        break;
      }
    }
    if (!flag) 
    {
      continue;
    }
    int n = s.size();
    if (n == 1 && a + b == 1) 
    {
      if (s[0] == '?') 
      {
        cout << (a == 1 ? "0\n" : "1\n");
        continue;
      } else 
      {
        if (a == 1 && s[0] == '0') 
        {
          cout << "0\n";
          continue; 
        } else if (b == 1 && s[0] == '1') 
        {
          cout << "1\n";
          continue;
        } else 
        {
          cout << "-1\n";
          continue;
        }
      }
    }
    if ((a & 1) && (b & 1) || a + b != n) 
    {
      cout << "-1\n";
      continue;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) 
    {
      if (s[i] == '?' && s[j] != '?') 
      {
        s[i] = s[j];
      } else if (s[i] != '?' && s[j] == '?') 
      {
        s[j] = s[i];
      }
    }
    for (int i = 0; i < n; i++) 
    {
      if (a < 0 || b < 0) 
      {
        flag = 0;
        break;
      }
      if (s[i] == '0') 
      {
        a--;
      } else if (s[i] == '1') 
      {
        b--;
      }
    }
    if (!flag) 
    {
      cout << "-1\n";
      continue;
    }
    for (int i = 0; i < n / 2; i++) 
    {
      if (a < 0 || b < 0) 
      {
        flag = 0;
        break;
      }
      if (s[i] != '?' && s[n - i - 1] == '?') 
      {
        if (s[i] == '0') 
        {
          s[n - i - 1] = s[i];
          a--;
        } else 
        {
          s[n - i - 1] = s[i];
          b--;
        }
      } 
    }
    if (!flag) 
    {
      cout << "-1\n";
      continue;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) 
    {
      if (a < 0 || b < 0) {
        flag = 0;
        break;
      }
      if (s[i] == '?' && s[j] == '?') 
      {
        if (a >= 2) 
        {
          s[i] = s[j] = '0';
          a -= 2;
        } else if (b >= 2) 
        {
          s[i] = s[j] = '1';
          b -= 2;
        }
      }
    }
    if (n % 2 == 1 && s[n / 2] == '?' && a + b == 1) 
    {
      s[n / 2] = (b == 1 ? '1' : '0');
    }
    if (!flag) 
    {
      cout << "-1\n";
      continue;
    }
    for (int i = 0; i < n; i++) 
    {
      if (s[i] == '?') {
        cout << "-1\n";
        flag = 0;
        break;
      }
    }
    if (!flag) 
    {
      continue;
    }
    cout << s << endl;
  }
  return 0;
}