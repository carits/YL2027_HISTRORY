#include <bits/stdc++.h>

using namespace std;

const int kN = 3e3 + 5;

int x, y;
int ans;
int a[kN];

bool Pd(int x)
{
  if(x % 400 == 0)
  {
    return 1;
  }
  else if(x % 100 != 0 && x % 4 == 0)
  {
    return 1;
  }
  else return 0;
}

int main()
{
  cin >> x >> y;

  for(int i = x; i <= y; i ++)
  {
    if(Pd(i) == 1)
    {
      ans ++;
      a[ans] = i;
    }
  }

  cout << ans << "\n";
  for(int i = 1; i <= ans; i ++)
  {
    cout << a[i] << " ";
  }
  return 0;
}