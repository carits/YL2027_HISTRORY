#include <bits/stdc++.h>

using namespace std;

const int kMaxn = 1005, kMaxm = 200005;
int a[kMaxn], b[kMaxm];

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      b[a[i] + a[j]]++;
    }
  }
  
  int maxx = 0;
  for (int i = 1; i <= kMaxm - 5; i++)
  {
    maxx = max(maxx, b[i]);
  }
  cout << maxx;
  return 0;
}