#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("skill.in", "r", stdin);
  freopen("skill.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  int v[4][7] = {{20, 20, 20, 20, 20, 0, 0}, {20, 20, 10, 30, 20, 0, 0}, {25, 25, 30, 20, 0, 0, 0}, {15, 15, 15, 10, 10, 15, 20}};
  cout << v[n-1][m-1] << endl;
  return 0;
}