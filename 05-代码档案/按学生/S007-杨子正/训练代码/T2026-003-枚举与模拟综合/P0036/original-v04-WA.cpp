#include<bits/stdc++.h>

#define int long long

using namespace std;

int ans[1000010];

signed main() 
{
  int a, b, sum, tot, t1, t2;
  cin >> a >> b;
  for (int i = 2; i <= 62; i++) 
  {
    t1 = pow(2, i) - 1;
    for (int j = i - 2; j >= 0; j--) 
    {
      t2 = t1 - pow(2, j);
      if (t2 >= a && t2 <= b)
      {
        tot++;
      }
    }
  }
  cout << tot;
  return 0;
}