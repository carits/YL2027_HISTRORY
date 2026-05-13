#include <bits/stdc++.h>

using namespace std;

void work()
{
  int n;
  double d, h, last = 0;
  cin >> n >> d >> h;

  double ans = d * h / 2 * n;
  for(int i = 1; i <= n; i ++)
  {
    double x;
    cin >> x;

    if(last > x)
    {
      ans -= d * (last - x) * (last - x) / (2 * h);
    }
    last = x + h;
  }
  
  printf("%.8f\n", ans);
}

int main()
{
  int t;
  cin >> t;

  while(t --)
  {
    work();
  }
  return 0;
}