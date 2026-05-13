#include <bits/stdc++.h>

using namespace std;

const int kN = 15;

int a[kN], dp[kN];

void work()
{
  int n;
  bool flag = 0;
  cin >> n;
  for(int i = 1; i <= n; i ++)
  {
    cin >> a[i];
    dp[i] = 1;
  }
  
  for(int i = 1; i < n; i ++)
  {
    if(a[i] > a[i + 1])
    {
      flag = 1;
    }
  }
  if(flag == 0)
  {
    cout << n << "\n";
    return;
  }
  
  for(int i = 1; i <= n; i ++)
  {
    for(int j = 1; j < i; j ++)
    {
      if(a[j] < a[i])
        dp[i] = max(dp[i], dp[j] + 1);
    }
  }
  
  int ans = 0;
  for(int i = 1; i <= n; i ++)
  {
    ans = max(ans, dp[i]);
  }
  cout << n - ans << "\n";
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