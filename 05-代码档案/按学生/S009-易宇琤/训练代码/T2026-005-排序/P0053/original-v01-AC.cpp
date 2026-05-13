#include <bits/stdc++.h>

using namespace std;

const int kN = 1e4 + 5, kM = 15;

struct Node
{
  int score[kM];
} a[kN];

int n, m;

bool Cmp(const Node &x, const Node &y)
{
  for(int i = 1; i <= m; i ++)
  {
    if(x.score[i] != y.score[i])
    {
      return x.score[i] > y.score[i];
    }
  }
  return 0;
}

int main()
{
  cin >> n >> m;  
  for(int i = 1; i <= n; i ++)
  {
    for(int j = 1; j <= m; j ++)
    {
      cin >> a[i].score[j];
    }
  }

  sort(a + 1, a + 1 + n, Cmp);

  for(int i = 1; i <= n; i ++)
  {
    for(int j = 1; j <= m; j ++)
    {
      cout << a[i].score[j] << " ";
    }
    cout << "\n";
  }
  return 0;
}