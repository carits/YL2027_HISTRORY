// 狂狼电竞俱乐部 | 胖头鱼
#include <bits/stdc++.h>

using namespace std;

ifstream fin("skill.in");
ofstream fout("skill.out");
// 直接把答案写进数组里
const int kV[5][10] = {{}, {0, 20, 20, 20, 20, 20}, {0, 20, 20, 10, 30, 20}, {0, 25, 25, 30, 20}, {0, 15, 15, 15, 10, 10, 15, 20}};

int n, m;

int main() {
  fin >> n >> m;
  fout << kV[n][m];
  return 0;
}
