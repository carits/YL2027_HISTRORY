#include <bits/stdc++.h>

using namespace std;

int n;

bool check(const string &x, const string &y)
{
  for (int i = 0; i < n; i++)
  {
    if (y[i] > x[i])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  cin >> n;
  string x, y;
  cin >> x >> y;

  if (!check(x, y))
  {
    cout << -1;
    return 0;
  }

  cout << y;
  return 0;
}