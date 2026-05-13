#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;
int n, p[N], q[N];

int main() 
{
  int T;
  cin >> T;
  while (T--) 
  {
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
      cin >> p[i];
    }

    for (int i = 1; i <= n; i++)
    {
      cout << n - p[i] + 1 << ' ';
    }
    cout << '\n';
  }
  return 0;
}