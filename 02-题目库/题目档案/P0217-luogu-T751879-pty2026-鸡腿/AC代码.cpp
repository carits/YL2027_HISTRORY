// 狂狼电竞俱乐部 | 胖头鱼
#include <bits/stdc++.h>

using namespace std;

ifstream fin("leg.in");
ofstream fout("leg.out");

long long n, m, v[2][2], c[2], ans, o, t;  // v[0][0] 偶层右移、 v[0][1] 奇层右移

int main() {
  fin >> n >> m >> v[0][0] >> v[1][0] >> v[0][1] >> v[1][1];
  c[0] = (n + m + 1) / 2, c[1] = n + m - c[0];                    // 计算奇层和偶层的数量
  ans = c[0] * v[0][0] + c[1] * v[0][1];                          // 全部右移的代价
  v[1][0] -= v[0][0], v[1][1] -= v[0][1], o = v[1][1] < v[1][0];  // 计算奇偶层转成向上的代价，并找到较小的
  t = min(m, c[o]), ans += t * v[1][o], m -= t;                   // 优先转换代价较小的层
  t = min(m, c[!o]), ans += t * v[1][!o];                         // 剩余的再用代价较大的层转换
  fout << ans;
  return 0;
}