#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 105;
string a[kMaxN];

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  int ans = 0;
  for (char i = 'a'; i <= 'z'; i++)
  {
    for (int j = i + 1; j <= 'z'; j++)
    {
      int sum = 0;
      for (int k = 1; k <= n; k++)
      {
        bool flag = false;
        for (int l = 0; l < a[k].size(); l++)
        {
          if (a[k][l] != i && a[k][l] != j)
          {
            flag = true;
            break;
          }
        }
        if (!flag)
        {
          sum += a[k].size();
        }
      }
      ans = max(ans, sum);
    }
  }
  
  cout << ans;
  return 0;
}