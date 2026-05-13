#include <bits/stdc++.h>

using namespace std;

const int N = 1005;
const int M = 105;
struct Node 
{
  int g;
  int no;
} s[N];
int sc[N][M];

bool cmp(Node a, Node b) 
{
  return a.g > b.g;
}

int main() 
{
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) 
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> sc[i][j];
    }
  }
  
  for (int j = 1; j <= m; j++) 
  {
    for (int i = 1; i <= n; i++) 
    {
      s[i].g = sc[i][j];
      s[i].no = i;
    }
    sort(s + 1, s + n + 1, cmp);
    for (int i = 1; i <= n; i++) 
    {
      if (i > 1) cout << " ";
      cout << s[i].no;
    }
    cout << "\n";
  }
  return 0;
}