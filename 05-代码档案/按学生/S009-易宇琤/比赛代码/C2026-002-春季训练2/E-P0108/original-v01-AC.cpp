#include <bits/stdc++.h>

using namespace std;

const int kN = 1e6 + 5;

bool vis[kN];

int main()
{
  int last, p;
  for(int i = 2; i <= 1e3; i ++)
  {
    last = i;
    p = i + 1;

    while(1)
    {
      last *= i;
      p += last;
      if(p > 1e6)
      {
        break;
      }

      vis[p] = 1;
    }
  }

  int t;
  cin >> t;
  while(t --)
  {
    int n;
    cin >> n;
    if(vis[n] == 1)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}