#include <bits/stdc++.h>

using namespace std;

const int kMaxX = 3005;
int a[kMaxX];

bool check(int x)
{
  return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0);
}

int main()
{
  int x, y;
  cin >> x >> y;
  
  int cnt = 0;
  for (int i = x; i <= y; i++)
  {
    if (check(i))
    {
      a[++cnt] = i;
    }
  }
  
  cout << cnt << "\n";
  for (int i = 1; i <= cnt; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}