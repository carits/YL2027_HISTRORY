#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() 
{
  int a, b;
  cin >> a >> b;
  set<int> ValidNums;
  for (int n = 1; n <= 62; n++) 
  {
    for (int m = 0; m < n; m++) 
    {
      int pow_n = 1LL << n;
      int pow_m = 1LL << m;
      int x = pow_n - pow_m;
      ValidNums.insert(x);
    }
  }
  int ans = 0;
  for (int num : ValidNums) 
  {
    if (num >= a && num <= b) 
    {
      ans++;
    }
  }
  cout << ans;
  return 0;
}