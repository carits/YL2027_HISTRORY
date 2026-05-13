#include <bits/stdc++.h>

using namespace std;

const int kN = 1e3 + 5, kM = 2e5 + 5;

int n;
int maxn;
int a[kN], cnt[kN];

int main()
{
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  sort(a + 1, a + 1 + n);

  for(int i = 1; i <= n; i++)
  {
    for(int j = i + 1; j <= n; j ++)
    {
      cnt[a[i] + a[j]] ++;
      maxn = max(maxn, cnt[a[i] + a[j]]);
    }
  }

  cout << maxn;
  return 0;
}