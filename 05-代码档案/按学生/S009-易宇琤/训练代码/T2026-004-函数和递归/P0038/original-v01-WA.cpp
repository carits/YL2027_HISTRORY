#include <bits/stdc++.h>

using namespace std;

int m, n;

bool Prime(int x)
{
  if(x <= 1)
  {
    return 0;
  }

  for(int i = 2; i * i <= x; i ++)
  {
    if(x % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

bool Pd(int x)
{
  if(Prime(x) == 0)
  {
    return 0;
  }
  int sum = 0, a = x;
  while(a > 0)
  {
    sum = sum * 10 + a % 10;
    a /= 10;
  }
  if(Prime(sum) == 0)
  {
    return 0;
  }
  else return 1;
}

int main()
{
  cin >> m >> n;

  bool flag = 0;
  for(int i = m; i <= n; i ++)
  {
    if(Pd(i) == 1)
    {
      if(flag == 0)
      {
        flag = 1;
      }
      else cout << ",";
      cout << i;
    }
  }
  return 0;
}