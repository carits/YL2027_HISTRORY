#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
const int dy[] = {2, -2, 1, -1, 2, -2, 1, -1};
bool vis[10][10];

int main() 
{
  string a, b;
  cin >> a >> b;

  int ax = a[0] - 'a' + 1;
  int ay = a[1] - '0';
  int bx = b[0] - 'a' + 1;
  int by = b[1] - '0';
  vis[ax][ay] = 1;
  vis[bx][by] = 1;
  
  for (int i = 1; i <= 8; i++) 
  {
    vis[i][ay] = 1;
  }
  for (int i = 1; i <= 8; i++) 
  {
    vis[ax][i] = 1;
  }

  for (int i = 0; i < 8; i++) 
  {
    int nx = bx + dx[i], ny = by + dy[i];
    if (nx < 1 || nx > 8 || ny < 1 || ny > 8) 
    {
      continue;
    }
    vis[nx][ny] = 1;
  }

  for (int i = 0; i < 8; i++) 
  {
    int nx = ax + dx[i], ny = ay + dy[i];
    if (nx < 1 || nx > 8 || ny < 1 || ny > 8) 
    {
      continue;
    }
    vis[nx][ny] = 1;
  }

  int ans = 0;
  for (int i = 1; i <= 8; i++) 
  {
    for (int j = 1; j <= 8; j++) 
    {
      if (!vis[i][j])
      {
        ans++;
      }
    }
  }

  cout << ans;
  return 0;
}