#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 1e5 + 5;
int a[kMaxN];

bool CheckP(int x)
{
  if (x == 2)
  {
    return true;
  }
  if (x == 1)
  {
    return false;
  }
  
  for (int i = 2; i * i <= x; i++)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}

bool check(int x)
{
  string StrX = to_string(x);
  string StrRevX = StrX;

  reverse(StrRevX.begin(), StrRevX.end());
  int RevX = 0, Len = StrRevX.size();
  for (int i = Len - 1, j = 1; i >= 0; i--, j *= 10)
  {
    int num = StrRevX[i] - '0';
    RevX += num * j;
  }

  return CheckP(x) && CheckP(RevX);
}

int main()
{
  int m, n;
  cin >> m >> n;

  int cnt = 0;
  for (int i = m; i <= n; i++)
  {
    if (check(i))
    {
      a[++cnt] = i;
    }
  }

  if (cnt == 0)
  {
    cout << "No";
    return 0;
  }

  for (int i = 1; i <= cnt; i++)
  {
    cout << a[i];
    if (i < cnt)
    {
      cout << ",";
    }
  }
  return 0;
}