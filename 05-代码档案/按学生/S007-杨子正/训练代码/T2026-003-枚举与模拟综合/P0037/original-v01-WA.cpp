#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 1e5 + 5;
int a[kMaxN];
map<int, int> mp;

int main() 
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    mp[a[i]]++;
  }

  long long ans = 0;
  for (int i = 1; i < n; i++)
  {
    mp[a[i]]--;
    for (int j = 0; j < 30; j++)
    {
      ans += mp[(1 << j) - a[i]];
    }
  }
  cout << ans;
  return 0;
}